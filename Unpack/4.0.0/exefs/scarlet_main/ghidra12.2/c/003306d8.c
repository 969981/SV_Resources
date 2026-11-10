/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003306d8; name: FUN_003306d8
 */


void FUN_003306d8(undefined8 *param_1)

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
  
  FUN_00330500();
  puVar1 = DAT_047ef4c0;
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
                    /* try { // try from 0033072c to 00330747 has its CatchHandler @ 003307b4 */
      __s1 = (char *)(**(code **)(*(long *)puVar5[uVar6] + 0x18))();
      __s2 = (char *)(**(code **)(*local_28 + 0x18))();
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003307ac to 003307af has its CatchHandler @ 003307b0 */
        abort();
      }
      uVar4 = *puVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4 >> 1);
  }
                    /* try { // try from 00330764 to 0033076f has its CatchHandler @ 003307b0 */
  FUN_00330f7c(puVar1,&local_28);
  plVar2 = local_28;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
  }
  return;
}


