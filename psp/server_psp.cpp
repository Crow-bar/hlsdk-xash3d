#ifdef __PSP__

#include <pspkernel.h>
#include "extdll.h"
#include "util.h"
#include "cbase.h"

// vitaXash3D(fgsfdsfgs) export technology used

extern "C"
{
extern void __global_ctors();
int __psp_free_heap(void);

typedef struct dllexport_s
{
	const char *name;
	void *func;
} dllexport_t;

void GiveFnptrsToDll( enginefuncs_t *pengfuncsFromEngine, globalvars_t *pGlobals );
int GetEntityAPI( DLL_FUNCTIONS *pFunctionTable, int interfaceVersion );
int GetEntityAPI2( DLL_FUNCTIONS *pFunctionTable, int *interfaceVersion );
//int Server_GetPhysicsInterface( int iVersion, server_physics_api_t *pfuncsFromEngine, physics_interface_t *pFunctionTable );
void monster_flyer( entvars_t *pev );
void monster_flyer_flock( entvars_t *pev );
void monster_alien_grunt( entvars_t *pev );
void item_airtank( entvars_t *pev );
void monster_apache( entvars_t *pev );
void hvr_rocket( entvars_t *pev );
void monster_barnacle( entvars_t *pev );
void monster_barney( entvars_t *pev );
void monster_barney_dead( entvars_t *pev );
void info_bigmomma( entvars_t *pev );
void bmortar( entvars_t *pev );
void monster_bigmomma( entvars_t *pev );
void monster_bloater( entvars_t *pev );
void func_wall( entvars_t *pev );
void func_wall_toggle( entvars_t *pev );
void func_conveyor( entvars_t *pev );
void func_illusionary( entvars_t *pev );
void func_monsterclip( entvars_t *pev );
void func_rotating( entvars_t *pev );
void func_pendulum( entvars_t *pev );
void squidspit( entvars_t *pev );
void monster_bullchicken( entvars_t *pev );
void env_global( entvars_t *pev );
void multisource( entvars_t *pev );
void func_button( entvars_t *pev );
void func_rot_button( entvars_t *pev );
void momentary_rot_button( entvars_t *pev );
void env_spark( entvars_t *pev );
void env_debris( entvars_t *pev );
void button_target( entvars_t *pev );
void monster_alien_controller( entvars_t *pev );
void controller_head_ball( entvars_t *pev );
void controller_energy_ball( entvars_t *pev );
void crossbow_bolt( entvars_t *pev );
void weapon_crossbow( entvars_t *pev );
void ammo_crossbow( entvars_t *pev );
void weapon_crowbar( entvars_t *pev );
void func_door( entvars_t *pev );
void func_water( entvars_t *pev );
void func_door_rotating( entvars_t *pev );
void momentary_door( entvars_t *pev );
void info_target( entvars_t *pev );
void env_bubbles( entvars_t *pev );
void beam( entvars_t *pev );
void env_lightning( entvars_t *pev );
void env_beam( entvars_t *pev );
#if _DEBUG
void trip_beam( entvars_t *pev );
#endif
void env_laser( entvars_t *pev );
void env_glow( entvars_t *pev );
void env_sprite( entvars_t *pev );
void gibshooter( entvars_t *pev );
void env_shooter( entvars_t *pev );
void test_effect( entvars_t *pev );
void env_blood( entvars_t *pev );
void env_shake( entvars_t *pev );
void env_fade( entvars_t *pev );
void env_message( entvars_t *pev );
void env_funnel( entvars_t *pev );
void env_beverage( entvars_t *pev );
void item_sodacan( entvars_t *pev );
void weapon_egon( entvars_t *pev );
void ammo_egonclip( entvars_t *pev );
void spark_shower( entvars_t *pev );
void env_explosion( entvars_t *pev );
void func_breakable( entvars_t *pev );
void func_pushable( entvars_t *pev );
void func_tank( entvars_t *pev );
void func_tanklaser( entvars_t *pev );
void func_tankrocket( entvars_t *pev );
void func_tankmortar( entvars_t *pev );
void func_tankcontrols( entvars_t *pev );
void streak_spiral( entvars_t *pev );
void garg_stomp( entvars_t *pev );
void monster_gargantua( entvars_t *pev );
void env_smoker( entvars_t *pev );
void weapon_gauss( entvars_t *pev );
void ammo_gaussclip( entvars_t *pev );
void monster_generic( entvars_t *pev );
void grenade( entvars_t *pev );
void weapon_glock( entvars_t *pev );
void weapon_9mmhandgun( entvars_t *pev );
void ammo_glockclip( entvars_t *pev );
void ammo_9mmclip( entvars_t *pev );
void monster_gman( entvars_t *pev );
void weapon_handgrenade( entvars_t *pev );
void monster_human_assassin( entvars_t *pev );
void monster_headcrab( entvars_t *pev );
void monster_babycrab( entvars_t *pev );
void item_healthkit( entvars_t *pev );
void func_healthcharger( entvars_t *pev );
void monster_human_grunt( entvars_t *pev );
void monster_grunt_repel( entvars_t *pev );
void monster_hgrunt_dead( entvars_t *pev );
void hornet( entvars_t *pev );
void weapon_hornetgun( entvars_t *pev );
void monster_houndeye( entvars_t *pev );
void func_recharge( entvars_t *pev );
void monster_cine_scientist( entvars_t *pev );
void monster_cine_panther( entvars_t *pev );
void monster_cine_barney( entvars_t *pev );
void monster_cine2_scientist( entvars_t *pev );
void monster_cine2_hvyweapons( entvars_t *pev );
void monster_cine2_slave( entvars_t *pev );
void monster_cine3_scientist( entvars_t *pev );
void monster_cine3_barney( entvars_t *pev );
void cine_blood( entvars_t *pev );
void cycler( entvars_t *pev );
void cycler_prdroid( entvars_t *pev );
void cycler_sprite( entvars_t *pev );
void cycler_weapon( entvars_t *pev );
void cycler_wreckage( entvars_t *pev );
void monster_ichthyosaur( entvars_t *pev );
void monster_alien_slave( entvars_t *pev );
void monster_vortigaunt( entvars_t *pev );
void world_items( entvars_t *pev );
void item_suit( entvars_t *pev );
void item_battery( entvars_t *pev );
void item_antidote( entvars_t *pev );
void item_security( entvars_t *pev );
void item_longjump( entvars_t *pev );
void monster_leech( entvars_t *pev );
void light( entvars_t *pev );
void light_spot( entvars_t *pev );
void light_environment( entvars_t *pev );
void game_score( entvars_t *pev );
void game_end( entvars_t *pev );
void game_text( entvars_t *pev );
void game_team_master( entvars_t *pev );
void game_team_set( entvars_t *pev );
void game_zone_player( entvars_t *pev );
void game_player_hurt( entvars_t *pev );
void game_counter( entvars_t *pev );
void game_counter_set( entvars_t *pev );
void game_player_equip( entvars_t *pev );
void game_player_team( entvars_t *pev );
void monstermaker( entvars_t *pev );
void func_mortar_field( entvars_t *pev );
void monster_mortar( entvars_t *pev );
void weapon_mp5( entvars_t *pev );
void weapon_9mmAR( entvars_t *pev );
void ammo_mp5clip( entvars_t *pev );
void ammo_9mmAR( entvars_t *pev );
void ammo_9mmbox( entvars_t *pev );
void ammo_mp5grenades( entvars_t *pev );
void ammo_ARgrenades( entvars_t *pev );
void monster_nihilanth( entvars_t *pev );
void nihilanth_energy_ball( entvars_t *pev );
void info_node( entvars_t *pev );
void info_node_air( entvars_t *pev );
void testhull( entvars_t *pev );
void node_viewer( entvars_t *pev );
void node_viewer_human( entvars_t *pev );
void node_viewer_fly( entvars_t *pev );
void node_viewer_large( entvars_t *pev );
void monster_osprey( entvars_t *pev );
void path_corner( entvars_t *pev );
void path_track( entvars_t *pev );
void func_plat( entvars_t *pev );
void func_platrot( entvars_t *pev );
void func_train( entvars_t *pev );
void func_tracktrain( entvars_t *pev );
void func_traincontrols( entvars_t *pev );
void func_trackchange( entvars_t *pev );
void func_trackautochange( entvars_t *pev );
void func_guntarget( entvars_t *pev );
void env_spritetrain( entvars_t *pev );
void player( entvars_t *pev );
void monster_hevsuit_dead( entvars_t *pev );
void player_weaponstrip( entvars_t *pev );
void player_loadsaved( entvars_t *pev );
void info_intermission( entvars_t *pev );
void monster_player( entvars_t *pev );
#if 0
void prop( entvars_t *pev );
#endif
void weapon_python( entvars_t *pev );
void weapon_357( entvars_t *pev );
void ammo_357( entvars_t *pev );
void monster_rat( entvars_t *pev );
void monster_cockroach( entvars_t *pev );
void weapon_rpg( entvars_t *pev );
void laser_spot( entvars_t *pev );
void rpg_rocket( entvars_t *pev );
void ammo_rpgclip( entvars_t *pev );
void monster_satchel( entvars_t *pev );
void weapon_satchel( entvars_t *pev );
void monster_scientist( entvars_t *pev );
void monster_scientist_dead( entvars_t *pev );
void monster_sitting_scientist( entvars_t *pev );
void scripted_sequence( entvars_t *pev );
void aiscripted_sequence( entvars_t *pev );
void scripted_sentence( entvars_t *pev );
void monster_furniture( entvars_t *pev );
void weapon_shotgun( entvars_t *pev );
void ammo_buckshot( entvars_t *pev );
void ambient_generic( entvars_t *pev );
void env_sound( entvars_t *pev );
void speaker( entvars_t *pev );
void soundent( entvars_t *pev );
void monster_snark( entvars_t *pev );
void weapon_snark( entvars_t *pev );
void info_null( entvars_t *pev );
void info_player_deathmatch( entvars_t *pev );
void info_player_start( entvars_t *pev );
void info_landmark( entvars_t *pev );
void DelayedUse( entvars_t *pev );
#if 0
void my_monster( entvars_t *pev );
#endif
void monster_tentacle( entvars_t *pev );
void monster_tentaclemaw( entvars_t *pev );
void func_friction( entvars_t *pev );
void trigger_auto( entvars_t *pev );
void trigger_relay( entvars_t *pev );
void multi_manager( entvars_t *pev );
void env_render( entvars_t *pev );
void trigger( entvars_t *pev );
void trigger_hurt( entvars_t *pev );
void trigger_monsterjump( entvars_t *pev );
void trigger_cdaudio( entvars_t *pev );
void target_cdaudio( entvars_t *pev );
void trigger_multiple( entvars_t *pev );
void trigger_once( entvars_t *pev );
void trigger_counter( entvars_t *pev );
void trigger_transition( entvars_t *pev );
void fireanddie( entvars_t *pev );
void trigger_changelevel( entvars_t *pev );
void func_ladder( entvars_t *pev );
void trigger_push( entvars_t *pev );
void trigger_teleport( entvars_t *pev );
void info_teleport_destination( entvars_t *pev );
void trigger_autosave( entvars_t *pev );
void trigger_endsection( entvars_t *pev );
void trigger_gravity( entvars_t *pev );
void trigger_changetarget( entvars_t *pev );
void trigger_camera( entvars_t *pev );
void monster_tripmine( entvars_t *pev );
void weapon_tripmine( entvars_t *pev );
void monster_turret( entvars_t *pev );
void monster_miniturret( entvars_t *pev );
void monster_sentry( entvars_t *pev );
void weaponbox( entvars_t *pev );
void infodecal( entvars_t *pev );
void bodyque( entvars_t *pev );
void worldspawn( entvars_t *pev );
void xen_plantlight( entvars_t *pev );
void xen_hair( entvars_t *pev );
void xen_ttrigger( entvars_t *pev );
void xen_tree( entvars_t *pev );
void xen_spore_small( entvars_t *pev );
void xen_spore_medium( entvars_t *pev );
void xen_spore_large( entvars_t *pev );
void xen_hull( entvars_t *pev );
void monster_zombie( entvars_t *pev );
void monster_blkop_apache( entvars_t *pev );
void monster_blkop_osprey( entvars_t *pev );
void monster_cleansuit_scientist( entvars_t *pev );
void monster_cleansuit_scientist_dead( entvars_t *pev );
void monster_sitting_cleansuit_scientist( entvars_t *pev );
void item_flag_team1( entvars_t *pev );
void item_flag_team2( entvars_t *pev );
void carried_flag_team1( entvars_t *pev );
void carried_flag_team2( entvars_t *pev );
void info_ctfspawn_powerup( entvars_t *pev );
void item_ctfaccelerator( entvars_t *pev );
void item_ctfbackpack( entvars_t *pev );
void item_ctflongjump( entvars_t *pev );
void item_ctfportablehev( entvars_t *pev );
void item_ctfregeneration( entvars_t *pev );
void info_displacer_xen_target( entvars_t *pev );
void info_displacer_earth_target( entvars_t *pev );
void displacer_ball( entvars_t *pev );
void weapon_displacer( entvars_t *pev );
void monster_drillsergeant( entvars_t *pev );
void weapon_eagle( entvars_t *pev );
void eagle_laser( entvars_t *pev );
void monster_human_grunt_ally( entvars_t *pev );
void monster_grunt_ally_repel( entvars_t *pev );
void monster_medic_ally_repel( entvars_t *pev );
void monster_torch_ally_repel( entvars_t *pev );
void monster_human_grunt_ally_dead( entvars_t *pev );
void monster_human_torch_ally( entvars_t *pev );
void monster_human_medic_ally( entvars_t *pev );
void func_tank_of( entvars_t *pev );
void func_tanklaser_of( entvars_t *pev );
void func_tankrocket_of( entvars_t *pev );
void func_tankmortar_of( entvars_t *pev );
void func_tankcontrols_of( entvars_t *pev );
void pitworm_gib( entvars_t *pev );
void pitworm_gibshooter( entvars_t *pev );
void env_blowercannon( entvars_t *pev );
void trigger_xen_return( entvars_t *pev );
void trigger_geneworm_hit( entvars_t *pev );
void trigger_playerfreeze( entvars_t *pev );
void item_generic( entvars_t *pev );
void env_genewormcloud( entvars_t *pev );
void env_genewormspawn( entvars_t *pev );
void monster_geneworm( entvars_t *pev );
void monster_gonome( entvars_t *pev );
void monster_gonome_dead( entvars_t *pev );
void weapon_grapple( entvars_t *pev );
void grapple_tip( entvars_t *pev );
void monster_houndeye_dead( entvars_t *pev );
void monster_alien_slave_dead( entvars_t *pev );
void weapon_knife( entvars_t *pev );
void monster_op4loader( entvars_t *pev );
void weapon_m249( entvars_t *pev );
void ammo_556( entvars_t *pev );
void monster_male_assassin( entvars_t *pev );
void monster_assassin_repel( entvars_t *pev );
void monster_massassin_dead( entvars_t *pev );
void item_nuclearbombtimer( entvars_t *pev );
void item_nuclearbombbutton( entvars_t *pev );
void item_nuclearbomb( entvars_t *pev );
void mortar_shell( entvars_t *pev );
void op4mortar( entvars_t *pev );
void func_op4mortarcontroller( entvars_t *pev );
void monster_otis( entvars_t *pev );
void monster_otis_dead( entvars_t *pev );
void monster_penguin( entvars_t *pev );
void weapon_penguin( entvars_t *pev );
void weapon_pipewrench( entvars_t *pev );
void pitdronespike( entvars_t *pev );
void monster_pitdrone( entvars_t *pev );
void monster_pitworm( entvars_t *pev );
void monster_pitworm_up( entvars_t *pev );
void info_pitworm_steam_lock( entvars_t *pev );
void monster_recruit( entvars_t *pev );
void env_rope( entvars_t *pev );
void rope_sample( entvars_t *pev );
void rope_segment( entvars_t *pev );
void env_electrified_wire( entvars_t *pev );
void shock_beam( entvars_t *pev );
void weapon_shockrifle( entvars_t *pev );
void monster_shockroach( entvars_t *pev );
void monster_skeleton_dead( entvars_t *pev );
void weapon_sniperrifle( entvars_t *pev );
void ammo_762( entvars_t *pev );
void spore( entvars_t *pev );
void weapon_sporelauncher( entvars_t *pev );
void ammo_spore( entvars_t *pev );
void monster_shocktrooper( entvars_t *pev );
void voltigore_energy_ball( entvars_t *pev );
void monster_alien_voltigore( entvars_t *pev );
void monster_alien_babyvoltigore( entvars_t *pev );
void monster_zombie_barney( entvars_t *pev );
void monster_zombie_soldier( entvars_t *pev );
void monster_zombie_soldier_dead( entvars_t *pev );

dllexport_t exports[] =
{
	{ "GiveFnptrsToDll", (void*)GiveFnptrsToDll },
	{ "GetEntityAPI", (void*)GetEntityAPI },
	{ "GetEntityAPI2", (void*)GetEntityAPI2 },
//	{ "Server_GetPhysicsInterface", (void*)Server_GetPhysicsInterface },
	{ "monster_flyer", (void*)monster_flyer },
	{ "monster_flyer_flock", (void*)monster_flyer_flock },
	{ "monster_alien_grunt", (void*)monster_alien_grunt },
	{ "item_airtank", (void*)item_airtank },
	{ "monster_apache", (void*)monster_apache },
	{ "hvr_rocket", (void*)hvr_rocket },
	{ "monster_barnacle", (void*)monster_barnacle },
	{ "monster_barney", (void*)monster_barney },
	{ "monster_barney_dead", (void*)monster_barney_dead },
	{ "info_bigmomma", (void*)info_bigmomma },
	{ "bmortar", (void*)bmortar },
	{ "monster_bigmomma", (void*)monster_bigmomma },
	{ "monster_bloater", (void*)monster_bloater },
	{ "func_wall", (void*)func_wall },
	{ "func_wall_toggle", (void*)func_wall_toggle },
	{ "func_conveyor", (void*)func_conveyor },
	{ "func_illusionary", (void*)func_illusionary },
	{ "func_monsterclip", (void*)func_monsterclip },
	{ "func_rotating", (void*)func_rotating },
	{ "func_pendulum", (void*)func_pendulum },
	{ "squidspit", (void*)squidspit },
	{ "monster_bullchicken", (void*)monster_bullchicken },
	{ "env_global", (void*)env_global },
	{ "multisource", (void*)multisource },
	{ "func_button", (void*)func_button },
	{ "func_rot_button", (void*)func_rot_button },
	{ "momentary_rot_button", (void*)momentary_rot_button },
	{ "env_spark", (void*)env_spark },
	{ "env_debris", (void*)env_debris },
	{ "button_target", (void*)button_target },
	{ "monster_alien_controller", (void*)monster_alien_controller },
	{ "controller_head_ball", (void*)controller_head_ball },
	{ "controller_energy_ball", (void*)controller_energy_ball },
	{ "crossbow_bolt", (void*)crossbow_bolt },
	{ "weapon_crossbow", (void*)weapon_crossbow },
	{ "ammo_crossbow", (void*)ammo_crossbow },
	{ "weapon_crowbar", (void*)weapon_crowbar },
	{ "func_door", (void*)func_door },
	{ "func_water", (void*)func_water },
	{ "func_door_rotating", (void*)func_door_rotating },
	{ "momentary_door", (void*)momentary_door },
	{ "info_target", (void*)info_target },
	{ "env_bubbles", (void*)env_bubbles },
	{ "beam", (void*)beam },
	{ "env_lightning", (void*)env_lightning },
	{ "env_beam", (void*)env_beam },
#if _DEBUG
	{ "trip_beam", (void*)trip_beam },
#endif
	{ "env_laser", (void*)env_laser },
	{ "env_glow", (void*)env_glow },
	{ "env_sprite", (void*)env_sprite },
	{ "gibshooter", (void*)gibshooter },
	{ "env_shooter", (void*)env_shooter },
	{ "test_effect", (void*)test_effect },
	{ "env_blood", (void*)env_blood },
	{ "env_shake", (void*)env_shake },
	{ "env_fade", (void*)env_fade },
	{ "env_message", (void*)env_message },
	{ "env_funnel", (void*)env_funnel },
	{ "env_beverage", (void*)env_beverage },
	{ "item_sodacan", (void*)item_sodacan },
	{ "weapon_egon", (void*)weapon_egon },
	{ "ammo_egonclip", (void*)ammo_egonclip },
	{ "spark_shower", (void*)spark_shower },
	{ "env_explosion", (void*)env_explosion },
	{ "func_breakable", (void*)func_breakable },
	{ "func_pushable", (void*)func_pushable },
	{ "func_tank", (void*)func_tank },
	{ "func_tanklaser", (void*)func_tanklaser },
	{ "func_tankrocket", (void*)func_tankrocket },
	{ "func_tankmortar", (void*)func_tankmortar },
	{ "func_tankcontrols", (void*)func_tankcontrols },
	{ "streak_spiral", (void*)streak_spiral },
	{ "garg_stomp", (void*)garg_stomp },
	{ "monster_gargantua", (void*)monster_gargantua },
	{ "env_smoker", (void*)env_smoker },
	{ "weapon_gauss", (void*)weapon_gauss },
	{ "ammo_gaussclip", (void*)ammo_gaussclip },
	{ "monster_generic", (void*)monster_generic },
	{ "grenade", (void*)grenade },
	{ "weapon_glock", (void*)weapon_glock },
	{ "weapon_9mmhandgun", (void*)weapon_9mmhandgun },
	{ "ammo_glockclip", (void*)ammo_glockclip },
	{ "ammo_9mmclip", (void*)ammo_9mmclip },
	{ "monster_gman", (void*)monster_gman },
	{ "weapon_handgrenade", (void*)weapon_handgrenade },
	{ "monster_human_assassin", (void*)monster_human_assassin },
	{ "monster_headcrab", (void*)monster_headcrab },
	{ "monster_babycrab", (void*)monster_babycrab },
	{ "item_healthkit", (void*)item_healthkit },
	{ "func_healthcharger", (void*)func_healthcharger },
	{ "monster_human_grunt", (void*)monster_human_grunt },
	{ "monster_grunt_repel", (void*)monster_grunt_repel },
	{ "monster_hgrunt_dead", (void*)monster_hgrunt_dead },
	{ "hornet", (void*)hornet },
	{ "weapon_hornetgun", (void*)weapon_hornetgun },
	{ "monster_houndeye", (void*)monster_houndeye },
	{ "func_recharge", (void*)func_recharge },
	{ "monster_cine_scientist", (void*)monster_cine_scientist },
	{ "monster_cine_panther", (void*)monster_cine_panther },
	{ "monster_cine_barney", (void*)monster_cine_barney },
	{ "monster_cine2_scientist", (void*)monster_cine2_scientist },
	{ "monster_cine2_hvyweapons", (void*)monster_cine2_hvyweapons },
	{ "monster_cine2_slave", (void*)monster_cine2_slave },
	{ "monster_cine3_scientist", (void*)monster_cine3_scientist },
	{ "monster_cine3_barney", (void*)monster_cine3_barney },
	{ "cine_blood", (void*)cine_blood },
	{ "cycler", (void*)cycler },
	{ "cycler_prdroid", (void*)cycler_prdroid },
	{ "cycler_sprite", (void*)cycler_sprite },
	{ "cycler_weapon", (void*)cycler_weapon },
	{ "cycler_wreckage", (void*)cycler_wreckage },
	{ "monster_ichthyosaur", (void*)monster_ichthyosaur },
	{ "monster_alien_slave", (void*)monster_alien_slave },
	{ "monster_vortigaunt", (void*)monster_vortigaunt },
	{ "world_items", (void*)world_items },
	{ "item_suit", (void*)item_suit },
	{ "item_battery", (void*)item_battery },
	{ "item_antidote", (void*)item_antidote },
	{ "item_security", (void*)item_security },
	{ "item_longjump", (void*)item_longjump },
	{ "monster_leech", (void*)monster_leech },
	{ "light", (void*)light },
	{ "light_spot", (void*)light_spot },
	{ "light_environment", (void*)light_environment },
	{ "game_score", (void*)game_score },
	{ "game_end", (void*)game_end },
	{ "game_text", (void*)game_text },
	{ "game_team_master", (void*)game_team_master },
	{ "game_team_set", (void*)game_team_set },
	{ "game_zone_player", (void*)game_zone_player },
	{ "game_player_hurt", (void*)game_player_hurt },
	{ "game_counter", (void*)game_counter },
	{ "game_counter_set", (void*)game_counter_set },
	{ "game_player_equip", (void*)game_player_equip },
	{ "game_player_team", (void*)game_player_team },
	{ "monstermaker", (void*)monstermaker },
	{ "func_mortar_field", (void*)func_mortar_field },
	{ "monster_mortar", (void*)monster_mortar },
	{ "weapon_mp5", (void*)weapon_mp5 },
	{ "weapon_9mmAR", (void*)weapon_9mmAR },
	{ "ammo_mp5clip", (void*)ammo_mp5clip },
	{ "ammo_9mmAR", (void*)ammo_9mmAR },
	{ "ammo_9mmbox", (void*)ammo_9mmbox },
	{ "ammo_mp5grenades", (void*)ammo_mp5grenades },
	{ "ammo_ARgrenades", (void*)ammo_ARgrenades },
	{ "monster_nihilanth", (void*)monster_nihilanth },
	{ "nihilanth_energy_ball", (void*)nihilanth_energy_ball },
	{ "info_node", (void*)info_node },
	{ "info_node_air", (void*)info_node_air },
	{ "testhull", (void*)testhull },
	{ "node_viewer", (void*)node_viewer },
	{ "node_viewer_human", (void*)node_viewer_human },
	{ "node_viewer_fly", (void*)node_viewer_fly },
	{ "node_viewer_large", (void*)node_viewer_large },
	{ "monster_osprey", (void*)monster_osprey },
	{ "path_corner", (void*)path_corner },
	{ "path_track", (void*)path_track },
	{ "func_plat", (void*)func_plat },
	{ "func_platrot", (void*)func_platrot },
	{ "func_train", (void*)func_train },
	{ "func_tracktrain", (void*)func_tracktrain },
	{ "func_traincontrols", (void*)func_traincontrols },
	{ "func_trackchange", (void*)func_trackchange },
	{ "func_trackautochange", (void*)func_trackautochange },
	{ "func_guntarget", (void*)func_guntarget },
	{ "env_spritetrain", (void*)env_spritetrain },
	{ "player", (void*)player },
	{ "monster_hevsuit_dead", (void*)monster_hevsuit_dead },
	{ "player_weaponstrip", (void*)player_weaponstrip },
	{ "player_loadsaved", (void*)player_loadsaved },
	{ "info_intermission", (void*)info_intermission },
	{ "monster_player", (void*)monster_player },
#if 0
	{ "prop", (void*)prop },
#endif
	{ "weapon_python", (void*)weapon_python },
	{ "weapon_357", (void*)weapon_357 },
	{ "ammo_357", (void*)ammo_357 },
	{ "monster_rat", (void*)monster_rat },
	{ "monster_cockroach", (void*)monster_cockroach },
	{ "weapon_rpg", (void*)weapon_rpg },
	{ "laser_spot", (void*)laser_spot },
	{ "rpg_rocket", (void*)rpg_rocket },
	{ "ammo_rpgclip", (void*)ammo_rpgclip },
	{ "monster_satchel", (void*)monster_satchel },
	{ "weapon_satchel", (void*)weapon_satchel },
	{ "monster_scientist", (void*)monster_scientist },
	{ "monster_scientist_dead", (void*)monster_scientist_dead },
	{ "monster_sitting_scientist", (void*)monster_sitting_scientist },
	{ "scripted_sequence", (void*)scripted_sequence },
	{ "aiscripted_sequence", (void*)aiscripted_sequence },
	{ "scripted_sentence", (void*)scripted_sentence },
	{ "monster_furniture", (void*)monster_furniture },
	{ "weapon_shotgun", (void*)weapon_shotgun },
	{ "ammo_buckshot", (void*)ammo_buckshot },
	{ "ambient_generic", (void*)ambient_generic },
	{ "env_sound", (void*)env_sound },
	{ "speaker", (void*)speaker },
	{ "soundent", (void*)soundent },
	{ "monster_snark", (void*)monster_snark },
	{ "weapon_snark", (void*)weapon_snark },
	{ "info_null", (void*)info_null },
	{ "info_player_deathmatch", (void*)info_player_deathmatch },
	{ "info_player_start", (void*)info_player_start },
	{ "info_landmark", (void*)info_landmark },
	{ "DelayedUse", (void*)DelayedUse },
#if 0
	{ "my_monster", (void*)my_monster },
#endif
	{ "monster_tentacle", (void*)monster_tentacle },
	{ "monster_tentaclemaw", (void*)monster_tentaclemaw },
	{ "func_friction", (void*)func_friction },
	{ "trigger_auto", (void*)trigger_auto },
	{ "trigger_relay", (void*)trigger_relay },
	{ "multi_manager", (void*)multi_manager },
	{ "env_render", (void*)env_render },
	{ "trigger", (void*)trigger },
	{ "trigger_hurt", (void*)trigger_hurt },
	{ "trigger_monsterjump", (void*)trigger_monsterjump },
	{ "trigger_cdaudio", (void*)trigger_cdaudio },
	{ "target_cdaudio", (void*)target_cdaudio },
	{ "trigger_multiple", (void*)trigger_multiple },
	{ "trigger_once", (void*)trigger_once },
	{ "trigger_counter", (void*)trigger_counter },
	{ "trigger_transition", (void*)trigger_transition },
	{ "fireanddie", (void*)fireanddie },
	{ "trigger_changelevel", (void*)trigger_changelevel },
	{ "func_ladder", (void*)func_ladder },
	{ "trigger_push", (void*)trigger_push },
	{ "trigger_teleport", (void*)trigger_teleport },
	{ "info_teleport_destination", (void*)info_teleport_destination },
	{ "trigger_autosave", (void*)trigger_autosave },
	{ "trigger_endsection", (void*)trigger_endsection },
	{ "trigger_gravity", (void*)trigger_gravity },
	{ "trigger_changetarget", (void*)trigger_changetarget },
	{ "trigger_camera", (void*)trigger_camera },
	{ "monster_tripmine", (void*)monster_tripmine },
	{ "weapon_tripmine", (void*)weapon_tripmine },
	{ "monster_turret", (void*)monster_turret },
	{ "monster_miniturret", (void*)monster_miniturret },
	{ "monster_sentry", (void*)monster_sentry },
	{ "weaponbox", (void*)weaponbox },
	{ "infodecal", (void*)infodecal },
	{ "bodyque", (void*)bodyque },
	{ "worldspawn", (void*)worldspawn },
	{ "xen_plantlight", (void*)xen_plantlight },
	{ "xen_hair", (void*)xen_hair },
	{ "xen_ttrigger", (void*)xen_ttrigger },
	{ "xen_tree", (void*)xen_tree },
	{ "xen_spore_small", (void*)xen_spore_small },
	{ "xen_spore_medium", (void*)xen_spore_medium },
	{ "xen_spore_large", (void*)xen_spore_large },
	{ "xen_hull", (void*)xen_hull },
	{ "monster_zombie", (void*)monster_zombie },
	{ "monster_blkop_apache", (void*)monster_blkop_apache },
	{ "monster_blkop_osprey", (void*)monster_blkop_osprey },
	{ "monster_cleansuit_scientist", (void*)monster_cleansuit_scientist },
	{ "monster_cleansuit_scientist_dead", (void*)monster_cleansuit_scientist_dead },
	{ "monster_sitting_cleansuit_scientist", (void*)monster_sitting_cleansuit_scientist },
	{ "item_flag_team1", (void*)item_flag_team1 },
	{ "item_flag_team2", (void*)item_flag_team2 },
	{ "carried_flag_team1", (void*)carried_flag_team1 },
	{ "carried_flag_team2", (void*)carried_flag_team2 },
	{ "info_ctfspawn_powerup", (void*)info_ctfspawn_powerup },
	{ "item_ctfaccelerator", (void*)item_ctfaccelerator },
	{ "item_ctfbackpack", (void*)item_ctfbackpack },
	{ "item_ctflongjump", (void*)item_ctflongjump },
	{ "item_ctfportablehev", (void*)item_ctfportablehev },
	{ "item_ctfregeneration", (void*)item_ctfregeneration },
	{ "info_displacer_xen_target", (void*)info_displacer_xen_target },
	{ "info_displacer_earth_target", (void*)info_displacer_earth_target },
	{ "displacer_ball", (void*)displacer_ball },
	{ "weapon_displacer", (void*)weapon_displacer },
	{ "monster_drillsergeant", (void*)monster_drillsergeant },
	{ "weapon_eagle", (void*)weapon_eagle },
	{ "eagle_laser", (void*)eagle_laser },
	{ "monster_human_grunt_ally", (void*)monster_human_grunt_ally },
	{ "monster_grunt_ally_repel", (void*)monster_grunt_ally_repel },
	{ "monster_medic_ally_repel", (void*)monster_medic_ally_repel },
	{ "monster_torch_ally_repel", (void*)monster_torch_ally_repel },
	{ "monster_human_grunt_ally_dead", (void*)monster_human_grunt_ally_dead },
	{ "monster_human_torch_ally", (void*)monster_human_torch_ally },
	{ "monster_human_medic_ally", (void*)monster_human_medic_ally },
	{ "func_tank_of", (void*)func_tank_of },
	{ "func_tanklaser_of", (void*)func_tanklaser_of },
	{ "func_tankrocket_of", (void*)func_tankrocket_of },
	{ "func_tankmortar_of", (void*)func_tankmortar_of },
	{ "func_tankcontrols_of", (void*)func_tankcontrols_of },
	{ "pitworm_gib", (void*)pitworm_gib },
	{ "pitworm_gibshooter", (void*)pitworm_gibshooter },
	{ "env_blowercannon", (void*)env_blowercannon },
	{ "trigger_xen_return", (void*)trigger_xen_return },
	{ "trigger_geneworm_hit", (void*)trigger_geneworm_hit },
	{ "trigger_playerfreeze", (void*)trigger_playerfreeze },
	{ "item_generic", (void*)item_generic },
	{ "env_genewormcloud", (void*)env_genewormcloud },
	{ "env_genewormspawn", (void*)env_genewormspawn },
	{ "monster_geneworm", (void*)monster_geneworm },
	{ "monster_gonome", (void*)monster_gonome },
	{ "monster_gonome_dead", (void*)monster_gonome_dead },
	{ "weapon_grapple", (void*)weapon_grapple },
	{ "grapple_tip", (void*)grapple_tip },
	{ "monster_houndeye_dead", (void*)monster_houndeye_dead },
	{ "monster_alien_slave_dead", (void*)monster_alien_slave_dead },
	{ "weapon_knife", (void*)weapon_knife },
	{ "monster_op4loader", (void*)monster_op4loader },
	{ "weapon_m249", (void*)weapon_m249 },
	{ "ammo_556", (void*)ammo_556 },
	{ "monster_male_assassin", (void*)monster_male_assassin },
	{ "monster_assassin_repel", (void*)monster_assassin_repel },
	{ "monster_massassin_dead", (void*)monster_massassin_dead },
	{ "item_nuclearbombtimer", (void*)item_nuclearbombtimer },
	{ "item_nuclearbombbutton", (void*)item_nuclearbombbutton },
	{ "item_nuclearbomb", (void*)item_nuclearbomb },
	{ "mortar_shell", (void*)mortar_shell },
	{ "op4mortar", (void*)op4mortar },
	{ "func_op4mortarcontroller", (void*)func_op4mortarcontroller },
	{ "monster_otis", (void*)monster_otis },
	{ "monster_otis_dead", (void*)monster_otis_dead },
	{ "monster_penguin", (void*)monster_penguin },
	{ "weapon_penguin", (void*)weapon_penguin },
	{ "weapon_pipewrench", (void*)weapon_pipewrench },
	{ "pitdronespike", (void*)pitdronespike },
	{ "monster_pitdrone", (void*)monster_pitdrone },
	{ "monster_pitworm", (void*)monster_pitworm },
	{ "monster_pitworm_up", (void*)monster_pitworm_up },
	{ "info_pitworm_steam_lock", (void*)info_pitworm_steam_lock },
	{ "monster_recruit", (void*)monster_recruit },
	{ "env_rope", (void*)env_rope },
	{ "rope_sample", (void*)rope_sample },
	{ "rope_segment", (void*)rope_segment },
	{ "env_electrified_wire", (void*)env_electrified_wire },
	{ "shock_beam", (void*)shock_beam },
	{ "weapon_shockrifle", (void*)weapon_shockrifle },
	{ "monster_shockroach", (void*)monster_shockroach },
	{ "monster_skeleton_dead", (void*)monster_skeleton_dead },
	{ "weapon_sniperrifle", (void*)weapon_sniperrifle },
	{ "ammo_762", (void*)ammo_762 },
	{ "spore", (void*)spore },
	{ "weapon_sporelauncher", (void*)weapon_sporelauncher },
	{ "ammo_spore", (void*)ammo_spore },
	{ "monster_shocktrooper", (void*)monster_shocktrooper },
	{ "voltigore_energy_ball", (void*)voltigore_energy_ball },
	{ "monster_alien_voltigore", (void*)monster_alien_voltigore },
	{ "monster_alien_babyvoltigore", (void*)monster_alien_babyvoltigore },
	{ "monster_zombie_barney", (void*)monster_zombie_barney },
	{ "monster_zombie_soldier", (void*)monster_zombie_soldier },
	{ "monster_zombie_soldier_dead", (void*)monster_zombie_soldier_dead },
	{ NULL, NULL },
};

PSP_MODULE_INFO("server", 0, 1, 1);
PSP_HEAP_SIZE_KB (128);
PSP_NO_CREATE_MAIN_THREAD();

int module_start( SceSize arglen, void *argp )
{
	void** exp = (void**)(*(void **)argp);
	*exp = exports;
	
	__global_ctors();
	return 0;
}

int module_stop( SceSize arglen, void *argp )
{
	__psp_free_heap(); //libc free heap
	return 0;
}
}
#endif //__PSP__