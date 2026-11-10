/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005453d4; name: FUN_005453d4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005453d4(long param_1)

{
  byte bVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa8);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8),
               *(ulong *)(param_1 + 200) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0xa8);
  }
  if ((bVar1 & 1) == 0) {
    FUN_01cfa410(param_1 + 0xa0);
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))
              (*(long **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8),
               *(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffe,1);
    FUN_01cfa410(param_1 + 0xa0);
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),
               *(ulong *)(param_1 + 0x80) & 0xfffffffffffffffe,1);
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
                    /* WARNING: Could not recover jumptable at 0x005454e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


