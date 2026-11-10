/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00557e34; name: FUN_00557e34
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00557e34(long param_1)

{
  byte bVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa0);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8),
               *(ulong *)(param_1 + 200) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0xa0);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x78);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
              (*(long **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xb0),
               *(ulong *)(param_1 + 0xa0) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x78);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88),
               *(ulong *)(param_1 + 0x78) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  if ((bVar1 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0x28);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
               *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe,1);
    cVar2 = *(char *)(param_1 + 0x28);
  }
  if (cVar2 != '\0') {
    FUN_01cfa44c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00557f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


