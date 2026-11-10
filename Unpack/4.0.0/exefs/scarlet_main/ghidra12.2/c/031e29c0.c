/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e29c0; name: FUN_031e29c0
 */


undefined8 FUN_031e29c0(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == param_2) {
    return 0;
  }
  puVar4 = param_1;
  while (uVar6 = *puVar4, ((uint)uVar6 >> 3 & 1) == 0) {
    if (((uVar6 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
    goto LAB_031e2a18;
  }
  if (puVar4 != (ulong *)0x0) {
    uVar6 = puVar4[(ulong)(byte)POPCOUNT((byte)uVar6 & 7) + 2];
    goto LAB_031e2a20;
  }
LAB_031e2a18:
  uVar6 = 0;
LAB_031e2a20:
  do {
    uVar5 = (uint)*param_1;
    if ((uVar5 >> 0xf & 1) != 0) {
      uVar3 = CONCAT44(uVar5,uVar5) & 0x7fff00007fff;
      uVar3 = param_1[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))) + 2];
      goto LAB_031e2a64;
    }
    if ((*param_1 & 9) != 0) {
      uVar3 = 0;
      goto LAB_031e2a64;
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  uVar3 = 0;
LAB_031e2a64:
  puVar4 = param_2;
  while (uVar7 = *puVar4, ((uint)uVar7 >> 3 & 1) == 0) {
    if (((uVar7 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
    goto LAB_031e2aa8;
  }
  if (puVar4 != (ulong *)0x0) {
    uVar7 = puVar4[(ulong)(byte)POPCOUNT((byte)uVar7 & 7) + 2];
    goto LAB_031e2ab0;
  }
LAB_031e2aa8:
  uVar7 = 0;
LAB_031e2ab0:
  do {
    uVar5 = (uint)*param_2;
    if ((uVar5 >> 0xf & 1) != 0) {
      uVar2 = CONCAT44(uVar5,uVar5) & 0x7fff00007fff;
      uVar2 = param_2[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2];
      goto LAB_031e2af0;
    }
  } while (((*param_2 & 9) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
  uVar2 = 0;
LAB_031e2af0:
  uVar1 = FUN_031e2760(uVar6,uVar3,uVar7,uVar2);
  return uVar1;
}


