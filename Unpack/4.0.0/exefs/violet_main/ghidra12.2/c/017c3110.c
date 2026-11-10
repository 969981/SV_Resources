/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c3110; name: FUN_017c3110
 */


void FUN_017c3110(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long local_68;
  
  puVar6 = PTR_DAT_047d9158;
  puVar5 = PTR_DAT_047d9150;
  puVar4 = PTR_DAT_047d8dd0;
  puVar3 = PTR_DAT_047d8dc8;
  puVar2 = PTR_DAT_047d3988;
  puVar1 = PTR_DAT_047d3980;
  if (param_1 != param_2) {
    do {
      lVar11 = *param_1;
      if (lVar11 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar1), iVar7 != 0)) {
              uVar10 = FUN_01adab84();
              *(undefined8 *)puVar2 = uVar10;
              __cxa_guard_release(puVar1);
            }
            *(undefined **)puVar4 = puVar2;
            __cxa_guard_release(puVar3);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(puVar5);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar6) {
            local_68 = lVar11 + -0x20;
            uVar9 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar9 & 1) == 0) {
              FUN_00c415f0(param_3,&local_68);
            }
            goto LAB_017c31ac;
          }
        }
      }
      local_68 = 0;
LAB_017c31ac:
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


