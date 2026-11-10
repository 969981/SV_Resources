/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d358ac; name: FUN_00d358ac
 */


void FUN_00d358ac(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  char acStack_130 [256];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_2;
  if (uVar2 != 0x4e414c46) {
    nn::util::SNPrintf(acStack_130,0x100,
                       "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                       (ulong)(uVar2 >> 0x18),(ulong)(uVar2 >> 0x10 & 0xff),
                       (ulong)(uVar2 >> 8 & 0xff),(ulong)(uVar2 & 0xff),0x4e,0x41,0x4c,0x46);
  }
  *param_1 = param_2;
  if ((short)param_2[4] != 0) {
    uVar2 = 0;
    piVar3 = (int *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + 6));
    do {
      iVar1 = *piVar3;
      if (iVar1 == 0x31746170) {
        puVar4 = param_1 + 2;
LAB_00d35968:
        *puVar4 = piVar3;
      }
      else {
        if (iVar1 == 0x31696170) {
          puVar4 = param_1 + 1;
          goto LAB_00d35968;
        }
        if (iVar1 == 0x31686170) {
          puVar4 = param_1 + 3;
          goto LAB_00d35968;
        }
      }
      piVar3 = (int *)((long)piVar3 + (ulong)(uint)piVar3[1]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ushort)param_2[4]);
  }
  return;
}


