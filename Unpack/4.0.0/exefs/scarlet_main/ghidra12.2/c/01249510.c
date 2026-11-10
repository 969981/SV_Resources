/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249510; name: FUN_01249510
 */


bool FUN_01249510(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(*(long *)(*param_1 + 0x38) + 0x498);
  if ((uVar5 >> 0x20 & 1) == 0) {
    if ((uVar5 >> 0x21 & 1) == 0) {
      return false;
    }
    plVar4 = (long *)FUN_010a0028(*(undefined8 *)(param_1[1] + 0x30),1,0);
    lVar6 = *plVar4;
  }
  else {
    plVar4 = (long *)FUN_010a0028(*(undefined8 *)(param_1[1] + 0x30),1,0);
    uVar5 = (**(code **)(*plVar4 + 0x90))(plVar4,0x3fd,0);
    if ((uVar5 & 1) == 0) {
      return false;
    }
    lVar6 = *plVar4;
  }
  iVar1 = (**(code **)(lVar6 + 0x560))(plVar4,6);
  uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
  uVar3 = iVar1 * (uVar2 & 0xffff);
  uVar2 = uVar3 / 100;
  if (0x31 < uVar3 % 100) {
    uVar2 = uVar3 / 100 + 1;
  }
  uVar3 = (**(code **)(*plVar4 + 0x108))(plVar4);
  return (uVar3 & 0xffff) <= uVar2;
}


