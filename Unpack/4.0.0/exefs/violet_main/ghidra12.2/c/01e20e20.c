/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e20e20; name: FUN_01e20e20
 */


long * FUN_01e20e20(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar4 = PTR_DAT_047d9148;
  puVar3 = PTR_DAT_047d9140;
  puVar2 = PTR_DAT_047d3988;
  puVar1 = PTR_DAT_047d3980;
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
            uVar8 = FUN_01adab84();
            *(undefined8 *)puVar2 = uVar8;
            __cxa_guard_release(puVar1);
          }
          *(undefined **)puVar4 = puVar2;
          __cxa_guard_release(puVar3);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar4) {
            uVar7 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar7 & 1) == 0) {
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


