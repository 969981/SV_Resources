/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fad70; name: FUN_002fad70
 */


undefined8 FUN_002fad70(long param_1,byte param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  size_t __n;
  long lVar10;
  void *__src;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar9 = 2;
  if ((param_1 != 0) && (param_3 != (undefined8 *)0x0)) {
    puVar8 = *(uint **)(param_1 + 0x18);
    lVar5 = *(long *)(puVar8 + 0xe);
    if ((((lVar5 == 0) ||
         (((*(int *)(lVar5 + 0x18) != 1 || (__n = *(size_t *)(lVar5 + 0x10), __n == 0)) ||
          (*(ulong *)(puVar8 + 0xc) < 0x2c)))) ||
        (((lVar10 = *(long *)(puVar8 + 0x12), lVar10 == 0 ||
          (lVar12 = *(long *)(puVar8 + 4), lVar12 == 0)) ||
         (lVar13 = *(long *)(puVar8 + 8), lVar13 == 0)))) ||
       (lVar6 = *(long *)(puVar8 + 0x10), lVar6 == 0)) {
      uVar9 = 5;
    }
    else {
      __src = *(void **)(lVar5 + 8);
      uVar7 = *(undefined8 *)(puVar8 + 2);
      uVar9 = *(undefined8 *)(puVar8 + 6);
      puVar11 = *(undefined8 **)(puVar8 + 10);
      if (*(int *)(lVar6 + 0x18) == 1) {
        puVar14 = *(undefined1 **)(lVar6 + 8);
        local_a0 = *(undefined8 *)(lVar6 + 0x10);
      }
      else {
        local_a0 = 0;
        puVar14 = &DAT_03c886bc;
      }
      puVar1 = (undefined8 *)FUN_0038c7b0(0x78);
      puVar2 = (undefined8 *)FUN_0038c7b0(0x2c);
      puVar1[2] = puVar2;
      uVar16 = *(undefined8 *)((long)puVar11 + 0x24);
      uVar15 = *(undefined8 *)((long)puVar11 + 0x1c);
      uVar19 = *puVar11;
      uVar18 = puVar11[3];
      uVar17 = puVar11[2];
      puVar2[1] = puVar11[1];
      *puVar2 = uVar19;
      puVar2[3] = uVar18;
      puVar2[2] = uVar17;
      *(undefined8 *)((long)puVar2 + 0x24) = uVar16;
      *(undefined8 *)((long)puVar2 + 0x1c) = uVar15;
      __dest = (void *)FUN_0038c7b0(__n + 1);
      puVar1[1] = __dest;
      memcpy(__dest,__src,__n);
      puVar1[0xe] = (ulong)*puVar8;
      lVar5 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 002faeb0 to 002faebb has its CatchHandler @ 002fafb4 */
      uVar3 = FUN_00305590(lVar10,lVar5,puVar1 + 5);
      if ((uVar3 & 1) == 0) {
        uVar9 = 5;
      }
      else {
                    /* try { // try from 002faec0 to 002faed3 has its CatchHandler @ 002fafac */
        lVar6 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 002faed8 to 002faee7 has its CatchHandler @ 002faf94 */
        puVar4 = (undefined4 *)FUN_0038ad50(PTR_PTR_047cca18,lVar6);
        *(undefined8 *)(puVar4 + 2) = uVar7;
        *(long *)(puVar4 + 4) = lVar12;
        *(undefined8 *)(puVar4 + 6) = uVar9;
        *(long *)(puVar4 + 8) = lVar13;
        *(void **)(puVar4 + 10) = __src;
        *(size_t *)(puVar4 + 0xc) = __n;
        *puVar4 = 2;
        *(long *)(puVar4 + 0x12) = lVar10;
        *(undefined1 **)(puVar4 + 0xe) = puVar14;
        *(undefined8 *)(puVar4 + 0x10) = local_a0;
                    /* try { // try from 002faf10 to 002faf23 has its CatchHandler @ 002faf90 */
        lVar10 = FUN_0038ace0(puVar4,PTR_PTR_047cca18,lVar6,&local_68);
        if (lVar10 == 0) {
          uVar9 = 5;
        }
        else {
                    /* try { // try from 002faf2c to 002faf33 has its CatchHandler @ 002faf8c */
          FUN_003676d0(&local_88,lVar10,local_68);
          uVar9 = 0;
          puVar1[0xb] = uStack_80;
          puVar1[10] = local_88;
          puVar1[0xd] = uStack_70;
          puVar1[0xc] = local_78;
          *(byte *)(puVar1 + 9) = param_2 & 1;
          *puVar1 = &PTR_LAB_04494248;
          *param_3 = puVar1;
        }
        if (lVar6 != 0) {
                    /* try { // try from 002faf70 to 002faf77 has its CatchHandler @ 002faf88 */
          FUN_0038bd40(lVar6);
        }
      }
      if (lVar5 != 0) {
                    /* try { // try from 002faf7c to 002faf83 has its CatchHandler @ 002fafb0 */
        FUN_0038bd40(lVar5);
      }
    }
  }
  return uVar9;
}


