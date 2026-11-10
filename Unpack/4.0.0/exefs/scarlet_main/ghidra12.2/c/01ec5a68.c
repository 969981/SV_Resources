/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec5a68; name: FUN_01ec5a68
 */


void FUN_01ec5a68(long param_1,byte *param_2,ushort param_3,char param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  
  plVar3 = *(long **)(param_1 + 0x80);
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar3 == plVar1) {
LAB_01ec5b14:
    if ((plVar3 != plVar1) &&
       (((param_3 < 6 && (*plVar3 != 0)) &&
        (pcVar5 = (char *)(*plVar3 + (ulong)param_3 + 0xd8), *pcVar5 == '\0')))) {
      *pcVar5 = param_4;
    }
  }
  else {
    do {
      if ((*plVar3 != 0) &&
         (uVar2 = *(uint *)(*plVar3 + 0x48),
         (uint)*param_2 == (uVar2 & 0xff) && (uint)*(ushort *)(param_2 + 2) == uVar2 >> 0x10))
      goto LAB_01ec5b14;
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
  }
  plVar3 = (long *)FUN_01ec5eb0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  if (((*(long **)(param_1 + 0x50) != plVar3) && (*plVar3 != 0)) &&
     ((param_3 < 6 &&
      ((lVar4 = *(long *)(*plVar3 + 0x10), lVar4 != 0 &&
       (pcVar5 = (char *)(lVar4 + (ulong)param_3 + 0xb0), *pcVar5 == '\0')))))) {
    *pcVar5 = param_4;
  }
  return;
}


