/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c27380; name: FUN_01c27380
 */


undefined1 FUN_01c27380(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  
  cVar2 = DAT_04812590;
  if ((1 < *param_2) ||
     (puVar5 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar5 = PTR_DAT_047d42e8;
      if (iVar4 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar5 = PTR_DAT_047d42e8;
    }
  }
  puVar1 = PTR_LAB_047d5d40;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar3 = FUN_01c295b4(param_1,puVar1,0,puVar5);
  return uVar3;
}


