/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03410c20; name: FUN_03410c20
 */


void FUN_03410c20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_24 [4];
  
  puVar2 = PTR_DAT_047e6cb8;
  if (*(char *)(DAT_048af280 + 0x100) != '\0') {
    puVar3 = *(undefined8 **)PTR_DAT_047e6cb8;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined8 *)puVar2 = 0;
        goto LAB_03410cf0;
      }
      *puVar3 = &PTR_LAB_047bf468;
      puVar3[1] = 0;
      puVar1 = PTR_DAT_047e6958;
      lVar5 = *(long *)(PTR_DAT_047e6958 + 8);
      puVar3[2] = 0;
      puVar3[3] = lVar5;
      plVar4 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar4 = (long *)(lVar5 + 0x10);
      }
      *plVar4 = (long)puVar3;
      *(undefined8 **)(puVar1 + 8) = puVar3;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      *puVar3 = &PTR_FUN_047bf440;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      *(undefined8 **)puVar2 = puVar3;
      *(undefined2 *)(puVar3 + 0x1c) = 0x101;
    }
    if (*(int *)(puVar3 + 0x1b) != 0) {
      plVar4 = (long *)puVar3[0x1a];
      goto LAB_03410cf8;
    }
  }
LAB_03410cf0:
  plVar4 = (long *)(DAT_048af280 + 0xf8);
LAB_03410cf8:
  if (*plVar4 != -1) {
    FUN_03411c9c(PTR_DAT_047e6d80,*plVar4,auStack_24);
  }
  return;
}


