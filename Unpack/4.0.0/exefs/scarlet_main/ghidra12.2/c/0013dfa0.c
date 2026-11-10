/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013dfa0; name: FUN_0013dfa0
 */


undefined * FUN_0013dfa0(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_2 + 1);
  uVar4 = (uint)bVar1;
  if (bVar1 == 0x47) {
    lVar5 = *(long *)(*param_2 + 0x18);
    if (lVar5 == 0) {
      uVar4 = 0x47;
      goto LAB_0013e02c;
    }
  }
  else {
    if (bVar1 != 0x45) goto LAB_0013e02c;
    lVar5 = *(long *)(*param_2 + 0x28);
    if (lVar5 == 0) {
      uVar4 = 0x45;
      goto LAB_0013e02c;
    }
  }
  uVar2 = FUN_0013c0f0(param_1,"__name");
  plVar3 = (long *)FUN_0013d2c0(lVar5,uVar2);
  if ((*(byte *)(plVar3 + 1) & 0xf) == 4) {
    return (undefined *)(*plVar3 + 0x18);
  }
  uVar4 = (uint)*(byte *)(param_2 + 1);
LAB_0013e02c:
  return (&PTR_s_no_value_04483270)[(uVar4 & 0xf) + 1];
}


