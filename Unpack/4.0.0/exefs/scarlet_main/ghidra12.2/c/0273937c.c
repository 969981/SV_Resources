/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0273937c; name: FUN_0273937c
 */


void FUN_0273937c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  pauVar1 = (undefined1 (*) [16])*param_1;
  auVar2 = NEON_ext(*pauVar1,*pauVar1,8,1);
  *param_2 = *(undefined8 *)*pauVar1;
  param_2[1] = auVar2._0_8_;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)param_1[1];
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)param_1[2];
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)param_1[3];
  *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)param_1[4];
  pauVar1 = (undefined1 (*) [16])param_1[5];
  auVar2 = NEON_ext(*pauVar1,*pauVar1,8,1);
  param_2[4] = *(undefined8 *)*pauVar1;
  param_2[5] = auVar2._0_8_;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)param_1[6];
  *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)param_1[7];
  return;
}


