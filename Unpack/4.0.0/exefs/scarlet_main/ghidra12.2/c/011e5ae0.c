/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e5ae0; name: FUN_011e5ae0
 */


void FUN_011e5ae0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x140) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x140) + 0x1e8) & 1) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x230) == 1) {
    if ((*(long *)(param_2 + 0x238) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 0x238) + 0x10), lVar6 == 0)) goto LAB_011e5b4c;
    uVar2 = FUN_021880e0(lVar6 + -0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x130);
  }
  else {
    FUN_011e7be0(*(undefined8 *)(param_2 + 0x130),param_2 + 0x138,0xffffffff);
    uVar3 = *(undefined8 *)(param_2 + 0x130);
    uVar2 = 0xffffffff;
  }
  FUN_011eaa70(uVar3,param_2 + 0x138,uVar2);
  FUN_00c70c8c(*(undefined8 *)(param_2 + 0x130));
LAB_011e5b4c:
  lVar6 = *(long *)(*(long *)(param_2 + 0x140) + 0x218) -
          *(long *)(*(long *)(param_2 + 0x140) + 0x210);
  if (lVar6 != 0) {
    uVar5 = (lVar6 >> 4) * -0x70a3d70a3d70a3d7;
    uVar1 = uVar5;
    if (uVar5 < 2) {
      uVar1 = 1;
    }
    FUN_011e5bfc(param_1,param_2);
    if (1 < uVar5) {
      lVar4 = uVar1 - 1;
      lVar6 = 400;
      do {
        FUN_011e5bfc(param_1,param_2,*(long *)(*(long *)(param_2 + 0x140) + 0x210) + lVar6);
        lVar6 = lVar6 + 400;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}


