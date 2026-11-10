/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4f47c; name: FUN_00a4f47c
 */


void FUN_00a4f47c(long param_1,byte param_2,ushort param_3,undefined1 param_4,undefined1 param_5,
                 byte param_6,undefined1 param_7,uint param_8)

{
  long *plVar1;
  undefined7 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((param_3 < 0x402) &&
     (uVar5 = FUN_00a664ac(param_1 + (ulong)param_3 * 0x18 + 0x2c), (uVar5 & 1) != 0)) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar9 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar9;
    puVar3 = PTR_DAT_047d4b10;
    plVar13 = *(long **)(lVar9 + 0x1c0);
    plVar1 = *(long **)(lVar9 + 0x1c8);
    if (plVar13 != plVar1) {
      do {
        lVar9 = *plVar13;
        puVar12 = (undefined8 *)(lVar9 + 0x28);
        plVar6 = (long *)(**(code **)*puVar12)(puVar12);
        if (((*PTR_DAT_047d4b08 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4b08), iVar4 != 0)) {
          uVar7 = FUN_01b3fb0c();
          *(undefined8 *)puVar3 = uVar7;
          __cxa_guard_release(PTR_DAT_047d4b08);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar3) {
            local_70 = 0;
            uStack_68 = 0;
            if (param_8 != 2) {
              param_8 = (uint)(param_8 == 1);
            }
            if (((*PTR_DAT_047d89f8 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d89f8);
            }
            lVar10 = *(long *)PTR_DAT_047d8a00;
            *(long *)PTR_DAT_047d8a08 = lVar10;
            uVar5 = (ulong)*(byte *)(lVar10 + 0x2c);
            if (uVar5 < 0xb) {
              uVar8 = *(uint *)(&DAT_03d2ff7c + uVar5 * 4);
            }
            else {
              uVar8 = 0;
            }
            if (param_6 < 0xb) {
              uVar11 = *(uint *)(&DAT_03d2ff7c + (ulong)param_6 * 4);
            }
            else {
              uVar11 = 0;
            }
            local_70 = (ulong)param_2 << 0x20;
            local_70 = CONCAT62(local_70._2_6_,param_3);
            local_70._0_6_ = CONCAT15(param_4,(undefined5)local_70);
            uVar2 = CONCAT16(param_5,(undefined6)local_70);
            local_70._0_4_ =
                 CONCAT22((ushort)(1 << (ulong)(uVar11 & 0x1f)) |
                          (ushort)(1 << (ulong)(uVar8 & 0x1f)),param_3);
            local_70 = CONCAT17(param_7,CONCAT34((int3)((uint7)uVar2 >> 0x20),(undefined4)local_70))
            ;
            FUN_02b034e8(lVar9,param_8,&local_70);
            return;
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar1);
    }
  }
  return;
}


