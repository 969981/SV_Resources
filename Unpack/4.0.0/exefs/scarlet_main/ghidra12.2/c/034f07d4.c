/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f07d4; name: FUN_034f07d4
 */


void FUN_034f07d4(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar3 = *(long **)(param_1 + 0x118);
  lVar4 = plVar3[3];
  if (*(int *)(param_1 + 0x130) == 2) {
    bVar1 = true;
  }
  else if ((*(uint *)(lVar4 + 699) >> 0xc & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar4 + 0x318) == -1;
  }
  if ((bVar1) || (*(int *)(param_2 + 0x2c) != 0x11)) {
    if ((bool)(*(int *)(param_2 + 0x2c) != 2 & (bVar1 ^ 1U))) {
      if (((uint)(*(int *)(param_1 + 0x130) == 1) & (*(uint *)(lVar4 + 699) & 0x4000) >> 0xe) == 0)
      {
        return;
      }
      FUN_03509a78(param_1);
      return;
    }
LAB_034f08f4:
    if (plVar3 == (long *)0x0) goto LAB_034f0934;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x120);
    if (lVar5 == 0) goto LAB_034f08f4;
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,0);
      puVar6 = *(undefined8 **)(param_1 + 0x118);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar6);
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    FUN_0350c4d4(param_1);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
    iVar2 = FUN_0350cb74(param_1,lVar5,1,0);
    if ((iVar2 == 1) && (iVar2 = FUN_0350b104(param_1), iVar2 == 1)) {
      FUN_0350f720(lVar5);
      return;
    }
    if (*(long *)(param_1 + 0x118) == 0) goto LAB_034f0934;
    lVar4 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
  }
  *(byte *)(lVar4 + 0x2ba) = *(byte *)(lVar4 + 0x2ba) & 0x87;
LAB_034f0934:
  *(undefined4 *)(param_1 + 0x130) = 2;
  return;
}


