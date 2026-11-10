/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a1340; name: FUN_012a1340
 */


long * FUN_012a1340(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_047d8d48;
  puVar1 = PTR_DAT_047d8d40;
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar6 = FUN_0168ea04();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            uVar5 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar5 & 1) == 0) {
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


