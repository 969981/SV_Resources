/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d82e0; name: FUN_007d82e0
 */


undefined8 FUN_007d82e0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047d0860;
  lVar4 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar7 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar2);
  lVar4 = lVar4 + 0x18;
  if (lVar7 == lVar4) {
    return 1;
  }
  lVar6 = 0;
LAB_007d8320:
  bVar3 = lVar6 == 0;
  do {
    if (bVar3) {
      lVar5 = *(long *)(param_1 + 0x140);
      if (lVar5 == param_1 + 0x138) break;
      plVar1 = (long *)(lVar7 + 0x10);
      while (*(long *)(lVar5 + 0x10) != *(long *)(*plVar1 + 0x30)) {
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == param_1 + 0x138) goto LAB_007d838c;
      }
      bVar3 = true;
      lVar7 = *(long *)(lVar7 + 8);
      lVar6 = *plVar1;
    }
    else {
      bVar3 = *(long *)(lVar7 + 0x10) == lVar6;
      lVar7 = *(long *)(lVar7 + 8);
    }
    if (lVar7 == lVar4) {
      return 1;
    }
  } while( true );
LAB_007d838c:
  lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar2);
  if (*(long *)(lVar7 + 0x10) == *(long *)(lVar4 + 0x98)) {
    *(undefined1 *)(param_1 + 0x780) = 0;
    if (*(int *)(param_1 + 0x784) == 0) {
      *(undefined4 *)(param_1 + 0x784) = 3;
      return 0;
    }
    return 0;
  }
  FUN_007d5240(param_1);
  lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar2);
  lVar7 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar2);
  lVar4 = lVar4 + 0x18;
  if (lVar7 == lVar4) {
    return 1;
  }
  goto LAB_007d8320;
}


