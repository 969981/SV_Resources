/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109fd40; name: FUN_0109fd40
 */


void FUN_0109fd40(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  FUN_010a0154();
  FUN_010a0110(param_1,param_2);
  *(undefined1 *)(*(long *)(param_2 + 0x2d0) + 9) =
       *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x4dd);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x4dd) != '\0') {
    *(short *)(*(long *)(param_2 + 0x2d0) + 10) = (short)*(undefined4 *)(lVar3 + 0x4e4);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(*(long *)(param_2 + 0x2d0) + 0xd) = *(undefined1 *)(lVar3 + 0x4de);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x4de) != '\0') {
    *(short *)(*(long *)(param_2 + 0x2d0) + 0xe) = (short)*(undefined4 *)(lVar3 + 0x4e8);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(*(long *)(param_2 + 0x2d0) + 0x11) = *(undefined1 *)(lVar3 + 0x4df);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x4df) != '\0') {
    *(short *)(*(long *)(param_2 + 0x2d0) + 0x12) = (short)*(undefined4 *)(lVar3 + 0x4ec);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(*(long *)(param_2 + 0x2d0) + 0x15) = *(undefined1 *)(lVar3 + 0x4e0);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x4e0) != '\0') {
    *(short *)(*(long *)(param_2 + 0x2d0) + 0x16) = (short)*(undefined4 *)(lVar3 + 0x4f0);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  *(undefined1 *)(*(long *)(param_2 + 0x2d0) + 0x19) = *(undefined1 *)(lVar3 + 0x4e1);
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar3 + 0x4e1) != '\0') {
    *(short *)(*(long *)(param_2 + 0x2d0) + 0x1a) = (short)*(undefined4 *)(lVar3 + 0x4f4);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  if ((((*(uint *)(lVar3 + 0x498) & 0x21000) != 0) && (*(short *)(lVar3 + 0x4f8) != 0)) &&
     (plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x548))(plVar2,6,*(undefined2 *)(*(long *)(param_1 + 0x38) + 0x4f8));
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar3 + 0x499) >> 2 & 1) != 0) {
    plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0);
    *(undefined1 *)((long)plVar2 + 0x714) = 1;
    (**(code **)(*plVar2 + 0x330))(plVar2,0x12,0);
    lVar3 = *(long *)(param_1 + 0x38);
    uVar1 = *(ushort *)(lVar3 + 0x514);
    if (uVar1 != 0) {
      plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0);
      (**(code **)(*plVar2 + 0x1b8))(plVar2,0,(ulong)(uint)uVar1 / 10);
      lVar3 = *(long *)(param_1 + 0x38);
    }
  }
  if ((*(ulong *)(lVar3 + 0x498) >> 0x21 & 1) == 0) {
    if ((*(ulong *)(lVar3 + 0x498) >> 0x20 & 1) != 0) {
      FUN_010a0810(*(undefined8 *)(param_2 + 0x330));
    }
  }
  else {
    plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0);
    *(undefined1 *)((long)plVar2 + 0x714) = 1;
    (**(code **)(*plVar2 + 0x330))(plVar2,0x12,0);
    lVar3 = *(long *)(param_1 + 0x38);
    plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0);
    if (plVar2 != (long *)0x0) {
      if (*(short *)(lVar3 + 0x6b0) != 0) {
        (**(code **)(*plVar2 + 0x548))(plVar2,6);
      }
      uVar4 = *(ushort *)(lVar3 + 0x6b2) & 0x1f;
      (**(code **)(*plVar2 + 0x328))(plVar2,uVar4 | uVar4 << 5 | 0x4800,0);
    }
    uVar4 = (uint)*(ushort *)(*(long *)(param_1 + 0x38) + 0x5b8);
    if (uVar4 != 0) {
      plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0);
      (**(code **)(*plVar2 + 0x1b8))(plVar2,0,(ulong)uVar4 / 10);
    }
  }
  if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x49a) >> 1 & 1) == 0) {
    return;
  }
  plVar2 = (long *)FUN_010a0028(*(undefined8 *)(param_2 + 0x30),1,0);
  *(undefined1 *)((long)plVar2 + 0x714) = 1;
                    /* WARNING: Could not recover jumptable at 0x010a0024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x330))(plVar2,0x12,0);
  return;
}


