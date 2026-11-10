/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3cf80; name: FUN_01e3cf80
 */


long * FUN_01e3cf80(long *param_1,long *param_2)

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
  
  puVar6 = PTR_DAT_047d9158;
  puVar5 = PTR_DAT_047d9150;
  puVar4 = PTR_DAT_047d8dd0;
  puVar3 = PTR_DAT_047d8dc8;
  puVar2 = PTR_DAT_047d3988;
  puVar1 = PTR_DAT_047d3980;
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
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
            uVar9 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar9 & 1) == 0) {
              return param_1;
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


