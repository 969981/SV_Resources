/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c84cc; name: FUN_005c84cc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005c84cc(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0xc0) = lVar3;
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),lVar3,*(long *)(param_1 + 200) - lVar3,4);
  }
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    FUN_01cfa410(param_1 + 0x90);
    bVar1 = *(byte *)(param_1 + 0x70);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),
               *(ulong *)(param_1 + 0x98) & 0xfffffffffffffffe,1);
    FUN_01cfa410(param_1 + 0x90);
    bVar1 = *(byte *)(param_1 + 0x70);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),
               *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0x28);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
               *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffe,1);
    cVar2 = *(char *)(param_1 + 0x28);
  }
  if (cVar2 != '\0') {
    FUN_01cfa44c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


