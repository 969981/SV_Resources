/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032e5bc; name: FUN_0032e5bc
 */


void FUN_0032e5bc(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char *__s1;
  char *__s2;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long *local_28;
  
  if ((DAT_047ef4b0 == (ulong *)0x0) &&
     (DAT_047ef4b0 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x58), DAT_047ef4b0 != (ulong *)0x0)) {
    *DAT_047ef4b0 = 0;
  }
  puVar1 = DAT_047ef4b0;
  local_28 = (long *)*param_1;
  *param_1 = 0;
  uVar4 = *puVar1;
  if (1 < uVar4) {
    uVar6 = 0;
    do {
      puVar5 = puVar1 + 1;
      if ((uVar4 & 1) != 0) {
        puVar5 = (ulong *)puVar1[1];
      }
                    /* try { // try from 0032e630 to 0032e64b has its CatchHandler @ 0032e6b8 */
      __s1 = (char *)(**(code **)(*(long *)puVar5[uVar6] + 0x18))();
      __s2 = (char *)(**(code **)(*local_28 + 0x18))();
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0032e6b0 to 0032e6b3 has its CatchHandler @ 0032e6b4 */
        abort();
      }
      uVar4 = *puVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4 >> 1);
  }
                    /* try { // try from 0032e668 to 0032e673 has its CatchHandler @ 0032e6b4 */
  FUN_0032edcc(puVar1,&local_28);
  plVar2 = local_28;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
  return;
}


