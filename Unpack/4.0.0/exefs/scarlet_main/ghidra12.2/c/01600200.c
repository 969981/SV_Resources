/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01600200; name: FUN_01600200
 */


/* WARNING: Removing unreachable block (ram,0x016002bc) */

void FUN_01600200(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_8;
  
  local_8 = param_1;
  FUN_01600f80(&local_40,param_1,&local_8);
  uVar2 = local_40;
  lVar1 = DAT_0483f0d8;
  local_40 = 0;
  DAT_0483f0d8 = uVar2;
  if (lVar1 != 0) {
    FUN_020e2580(&DAT_0483f0e0);
  }
  DAT_0483f0e0 = local_38;
  DAT_0483f0e8 = local_30;
  DAT_0483f0f0 = local_28;
  local_30 = 0x6ad4ce3e2104194b;
  local_28 = "ti_PokeVoiceComponent";
  FUN_01600414(&local_30);
  return;
}


