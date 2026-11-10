/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02173240; name: FUN_02173240
 */


float FUN_02173240(float param_1,long *param_2,ushort *param_3,long *param_4)

{
  ushort uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  
  puVar6 = PTR_LAB_047dae08;
  puVar5 = PTR_DAT_047d8ca8;
  puVar4 = PTR_DAT_047d8ca0;
  puVar3 = PTR_DAT_047d8c98;
  uVar1 = *param_3;
  if (uVar1 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    do {
      uVar9 = (uint)uVar1;
      if (uVar9 == 0x1b) {
        local_90 = param_2[5];
        lStack_88 = param_2[6];
        local_80 = param_2[7];
        local_78 = (long *)param_2[8];
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
          FUN_00100190(puVar6,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
        uVar7 = FUN_01049930();
        param_4 = (long *)(**(code **)(*param_2 + 0x78))(param_2,&local_90,uVar7);
        plVar2 = local_78;
joined_r0x02173370:
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
LAB_021733bc:
        lVar10 = 1;
      }
      else {
        if (uVar9 - 0x11 < 10) {
          local_b0 = param_2[5];
          lStack_a8 = param_2[6];
          local_a0 = param_2[7];
          local_98 = (long *)param_2[8];
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x18))();
          }
          param_4 = (long *)(**(code **)(*param_2 + 0x78))(param_2,&local_b0,*param_3 - 0x11);
          plVar2 = local_98;
          goto joined_r0x02173370;
        }
        if (uVar9 != 0x10) {
          iVar8 = (**(code **)(*param_4 + 0x80))(param_4);
          iVar11 = iVar8 + iVar11;
          goto LAB_021733bc;
        }
        if (param_3[2] == 0xbd09) break;
        lVar10 = (ulong)param_3[1] + 2;
      }
      param_3 = param_3 + lVar10;
      uVar1 = *param_3;
    } while (uVar1 != 0);
  }
  iVar8 = (**(code **)(*param_4 + 0x20))(param_4);
  return (param_1 / (float)iVar8) * (float)iVar11;
}


