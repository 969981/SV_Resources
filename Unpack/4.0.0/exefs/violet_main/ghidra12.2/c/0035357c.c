/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035357c; name: FUN_0035357c
 */


void FUN_0035357c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    lVar1 = tpidr_el0;
    puVar2 = (undefined8 *)*param_2;
    do {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = *(long *)(lVar1 + 0x48);
      *puVar2 = 0;
      plVar5 = (long *)(lVar4 + 8);
      if (*plVar5 != 0) {
        plVar5 = *(long **)(lVar4 + 0x10);
      }
      *plVar5 = (long)puVar2;
      *(undefined8 **)(lVar4 + 0x10) = puVar2;
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


