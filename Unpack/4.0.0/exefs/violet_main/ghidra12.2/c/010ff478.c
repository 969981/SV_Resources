/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ff478; name: FUN_010ff478
 */


void FUN_010ff478(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (long *)(param_2 + 0x78);
  if ((*plVar2 != 0) && (puVar3 = *(undefined8 **)(*plVar2 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d6528;
    if ((*PTR_DAT_047d6520 & 1) == 0) {
      uVar1 = __cxa_guard_acquire(PTR_DAT_047d6520);
      puVar4 = (undefined8 *)PTR_DAT_047d6528;
      if ((int)uVar1 != 0) {
        uVar1 = FUN_0151c130(uVar1,plVar2);
        *(undefined8 *)PTR_DAT_047d6528 = uVar1;
        __cxa_guard_release(PTR_DAT_047d6520);
        puVar4 = (undefined8 *)PTR_DAT_047d6528;
      }
    }
    do {
      if (puVar3 == puVar4) {
        FUN_00d7c390(param_1,plVar2);
        return;
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}


