/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bde00; name: FUN_027bde00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027bde00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_54;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  uint7 uStack_28;
  
  uVar3 = FUN_027bdd10();
  uVar2 = _UNK_03cab338;
  uVar1 = _DAT_03cab330;
  strncpy((char *)&local_40,"nn.npln.Shared",0x1f);
  *param_1 = uVar3;
  param_1[1] = 1;
  param_1[0xe] = 0;
  param_1[3] = CONCAT44(uStack_54,0x80000000);
  param_1[2] = 0x2000;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uStack_38;
  param_1[6] = local_40;
  param_1[9] = (ulong)uStack_28;
  param_1[8] = uStack_30;
  return;
}


