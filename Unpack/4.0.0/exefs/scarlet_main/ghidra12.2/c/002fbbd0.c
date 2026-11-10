/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fbbd0; name: FUN_002fbbd0
 */


void FUN_002fbbd0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  size_t __n;
  void *pvVar9;
  size_t __n_00;
  int *piVar10;
  undefined8 uVar11;
  undefined8 local_48;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar8 = *(long *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    uVar4 = FUN_002fafd0();
    if ((uVar4 & 1) != 0) {
      puVar5 = (undefined4 *)FUN_0038c7b0(0x20);
      uVar3 = 0xe;
      goto LAB_002fbcc8;
    }
    if (((iVar2 == 0) && ((param_2 & 1) != 0)) && (lVar8 != 0)) {
      lVar6 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 002fbc48 to 002fbc5f has its CatchHandler @ 002fbe50 */
      puVar5 = (undefined4 *)FUN_002fd230(lVar8,lVar6);
      FUN_0036a810(*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (puVar5 == (undefined4 *)0x0) {
                    /* try { // try from 002fbcf4 to 002fbd1b has its CatchHandler @ 002fbe50 */
        puVar5 = (undefined4 *)FUN_0038c7b0(0x20);
        *(undefined8 *)(puVar5 + 2) = 0;
        *puVar5 = 8;
        *(undefined8 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        FUN_002fc350(param_1,0,puVar5);
      }
      else {
        piVar10 = *(int **)(puVar5 + 8);
        if (piVar10 == (int *)0x0) {
                    /* try { // try from 002fbd20 to 002fbd47 has its CatchHandler @ 002fbe40 */
          puVar5 = (undefined4 *)FUN_0038c7b0(0x20);
          *(undefined8 *)(puVar5 + 2) = 0;
          *puVar5 = 8;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          FUN_002fc350(param_1,0,puVar5);
        }
        else {
          __n = *(size_t *)(puVar5 + 4);
          if (__n == 0) {
            uVar11 = 0;
          }
          else {
            pvVar9 = *(void **)(puVar5 + 2);
            pvVar7 = *(void **)(param_1 + 0xd8);
            uVar4 = *(ulong *)(param_1 + 0xe0);
            while (uVar4 < __n) {
              *(ulong *)(param_1 + 0xe0) = uVar4 << 1;
                    /* try { // try from 002fbc90 to 002fbc93 has its CatchHandler @ 002fbe54 */
              pvVar7 = (void *)FUN_0038c7f0();
              uVar4 = *(ulong *)(param_1 + 0xe0);
              *(void **)(param_1 + 0xd8) = pvVar7;
            }
            memcpy(pvVar7,pvVar9,__n);
            uVar11 = *(undefined8 *)(param_1 + 0xd8);
          }
          local_48 = 0;
          if (*(long *)(puVar5 + 6) != 0) {
                    /* try { // try from 002fbd60 to 002fbdab has its CatchHandler @ 002fbe48 */
            iVar2 = FUN_002fad70(puVar5,*(undefined1 *)(param_1 + 0xb0),&local_48);
            if (iVar2 != 0) {
              piVar10 = (int *)FUN_0038c7b0(0x20);
              *piVar10 = iVar2;
              piVar10[2] = 0;
              piVar10[3] = 0;
              piVar10[4] = 0;
              piVar10[5] = 0;
              piVar10[6] = 0;
              piVar10[7] = 0;
              FUN_002fc350(param_1,0,piVar10);
              goto LAB_002fbe14;
            }
            FUN_002fb140(local_48,param_1 + 0xb8,*puVar5);
          }
          iVar2 = *piVar10;
          if ((iVar2 != 0) && (__n_00 = *(size_t *)(piVar10 + 4), __n_00 != 0)) {
            pvVar9 = *(void **)(piVar10 + 2);
                    /* try { // try from 002fbdc4 to 002fbdc7 has its CatchHandler @ 002fbe3c */
            pvVar7 = (void *)FUN_0038c7b0(__n_00 + 1);
            memcpy(pvVar7,pvVar9,__n_00);
                    /* try { // try from 002fbdd8 to 002fbddf has its CatchHandler @ 002fbe3c */
            free(pvVar7);
          }
                    /* try { // try from 002fbde0 to 002fbe13 has its CatchHandler @ 002fbe4c */
          uVar3 = FUN_002fd1e0(iVar2);
          uVar1 = local_48;
          puVar5 = (undefined4 *)FUN_0038c7b0(0x20);
          *puVar5 = uVar3;
          *(undefined8 *)(puVar5 + 6) = uVar1;
          *(undefined8 *)(puVar5 + 2) = uVar11;
          *(size_t *)(puVar5 + 4) = __n;
          FUN_002fc350(param_1,0,puVar5);
        }
      }
LAB_002fbe14:
      if (lVar6 != 0) {
                    /* try { // try from 002fbe18 to 002fbe1f has its CatchHandler @ 002fbe44 */
        FUN_0038bd40(lVar6);
      }
      return;
    }
  }
  puVar5 = (undefined4 *)FUN_0038c7b0(0x20);
  uVar3 = 7;
LAB_002fbcc8:
  *puVar5 = uVar3;
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  FUN_002fc350(param_1,0,puVar5);
  return;
}


