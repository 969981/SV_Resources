/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021739cc; name: FUN_021739cc
 */


ulong FUN_021739cc(long *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0xfd) {
    bVar1 = (**(code **)(*param_1 + 0x70))(param_1);
    param_2 = 0xfd;
    uVar6 = (uint)(1 < bVar1) << 6;
LAB_02173a54:
    uVar8 = 0;
    uVar3 = 0;
    uVar4 = 0x20000;
  }
  else {
    if (param_2 == 0xfe) {
      param_2 = *(uint *)((long)param_1 + 0xcc);
    }
    else if (param_2 == 0xff) {
      iVar2 = (**(code **)(*param_1 + 0x68))(param_1);
      if (iVar2 == 0) {
        param_2 = 0xff;
        uVar4 = 0x20000;
        uVar8 = 0;
        uVar3 = 0;
        uVar6 = 0;
      }
      else {
        if (iVar2 == 1) {
          param_2 = 0xff;
          uVar6 = 1;
          goto LAB_02173a54;
        }
        if (((*PTR_DAT_047d8c98 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar2 != 0)) {
          FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c98);
        }
        lVar7 = *(long *)PTR_DAT_047d8ca0;
        *(long *)PTR_DAT_047d8ca8 = lVar7;
        uVar3 = 0;
        uVar8 = 0;
        param_2 = 0xff;
        uVar4 = 0x20000;
        uVar6 = (uint)(*(int *)(lVar7 + 0x2b0) == 5) << 1;
      }
      goto LAB_02173a58;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      uVar9 = 0;
      uVar8 = 0;
      goto LAB_02173b04;
    }
    lVar7 = param_1[0xc] + (ulong)param_2 * 0x18;
    uVar6 = *(uint *)(lVar7 + 8);
    uVar8 = *(uint *)(lVar7 + 0xc);
    uVar3 = uVar6 & 0xff000000;
    uVar4 = uVar6 & 0xff0000;
  }
LAB_02173a58:
  uVar3 = *(uint *)((long)param_1 + 0xd4) & *(uint *)((long)param_1 + 0xdc) |
          (uVar4 | uVar3 | uVar6 & 0xffff) & ~*(uint *)((long)param_1 + 0xdc);
  uVar9 = (ulong)uVar3;
  uVar4 = uVar3 >> 0x10;
  uVar6 = uVar4;
  if ((uVar3 & 0x40) != 0) {
    uVar6 = uVar4 & 0xffe7 | 4;
  }
  uVar10 = uVar9 & 0xff000000;
  if ((uVar3 & 0x20) != 0) {
    uVar6 = uVar4 & 0xffe3 | 8;
  }
  if ((uVar6 >> 1 & 1) == 0) {
    if ((*PTR_DAT_047d8c98 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c98);
      if (iVar2 != 0) {
        FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c98);
      }
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d8ca0;
    *(undefined8 *)PTR_DAT_047d8ca8 = uVar5;
    uVar4 = FUN_02172000(uVar5,*(undefined8 *)
                                (*(long *)(param_1[0xc] + (ulong)param_2 * 0x18) + 0x30));
    uVar9 = (ulong)(uVar3 & 0xffe0 | uVar3 & 3 | (uVar4 & 7) << 2);
  }
  uVar9 = uVar10 | ((ulong)uVar6 & 0xff) << 0x10 | uVar9 & 0xffff;
LAB_02173b04:
  return uVar9 | (ulong)uVar8 << 0x20;
}


