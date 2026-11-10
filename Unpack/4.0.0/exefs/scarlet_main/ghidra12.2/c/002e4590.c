/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e4590; name: FUN_002e4590
 */


ulong FUN_002e4590(ulong param_1)

{
  pthread_rwlock_t *__rwlock;
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_50 [8];
  undefined1 **local_48;
  undefined1 *local_38;
  
  if (*(ushort *)(param_1 + 4) < 0xfffe) {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) + 1;
    return param_1;
  }
  if (DAT_047ef1e0 != -1) {
    local_48 = &local_38;
    local_38 = auStack_50;
    std::__call_once((ulong *)&DAT_047ef1e0,&local_48,(_func_void_void_ptr *)&LAB_002e72d0);
  }
  __rwlock = DAT_047ef1d0;
  iVar3 = pthread_rwlock_wrlock(DAT_047ef1d0);
  plVar1 = DAT_047ef1d8;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar8 = DAT_047ef1d8 + 1;
  plVar5 = (long *)*plVar8;
  if (*(short *)(param_1 + 4) == -1) {
    if (plVar5 != (long *)0x0) {
      plVar9 = DAT_047ef1d8 + 1;
      do {
        plVar8 = plVar5;
        if (param_1 < (ulong)plVar5[4]) {
          if ((long *)*plVar5 == (long *)0x0) {
            puVar7 = (undefined8 *)*plVar5;
            goto joined_r0x002e4768;
          }
          plVar2 = (long *)*plVar5;
          plVar9 = plVar5;
        }
        else {
          if (param_1 <= (ulong)plVar5[4]) goto LAB_002e46b4;
          plVar9 = plVar5 + 1;
          plVar2 = (long *)*plVar9;
          if ((long *)*plVar9 == (long *)0x0) goto LAB_002e46b4;
        }
        plVar5 = plVar2;
      } while( true );
    }
    puVar7 = (undefined8 *)*plVar8;
    plVar5 = plVar8;
    goto joined_r0x002e4768;
  }
  if (plVar5 != (long *)0x0) {
    plVar9 = DAT_047ef1d8 + 1;
    do {
      uVar6 = plVar5[4];
      plVar8 = plVar5;
      if (param_1 <= uVar6 && uVar6 != param_1) {
        plVar9 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) {
          puVar7 = (undefined8 *)*plVar5;
          goto joined_r0x002e46f0;
        }
        plVar5 = (long *)*plVar5;
      }
      else {
        if (param_1 <= uVar6) goto LAB_002e4660;
        plVar9 = plVar5 + 1;
        plVar5 = (long *)*plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_002e4660;
      }
    } while( true );
  }
  puVar7 = (undefined8 *)*plVar8;
  plVar9 = plVar8;
joined_r0x002e46f0:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar7[4] = param_1;
    *(undefined4 *)(puVar7 + 5) = 0;
    puVar7[2] = plVar8;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar9 = (long)puVar7;
    if (*(long *)*plVar1 == 0) {
      puVar4 = puVar7;
    }
    else {
      *plVar1 = *(long *)*plVar1;
      puVar4 = (undefined8 *)*plVar9;
    }
    FUN_010108e0(plVar1[1],puVar4);
    plVar1[2] = plVar1[2] + 1;
  }
  *(undefined4 *)(puVar7 + 5) = 0xffff;
  *(undefined2 *)(param_1 + 4) = 0xffff;
LAB_002e47d0:
                    /* try { // try from 002e47d0 to 002e47d7 has its CatchHandler @ 002e4800 */
  iVar3 = pthread_rwlock_unlock(__rwlock);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002e47fc to 002e47ff has its CatchHandler @ 002e4800 */
    abort();
  }
  return param_1;
LAB_002e46b4:
  puVar7 = (undefined8 *)*plVar9;
  plVar5 = plVar9;
joined_r0x002e4768:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar7[4] = param_1;
    *(undefined4 *)(puVar7 + 5) = 0;
    puVar7[2] = plVar8;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar5 = (long)puVar7;
    if (*(long *)*plVar1 == 0) {
      puVar4 = puVar7;
    }
    else {
      *plVar1 = *(long *)*plVar1;
      puVar4 = (undefined8 *)*plVar5;
    }
    FUN_010108e0(plVar1[1],puVar4);
    plVar1[2] = plVar1[2] + 1;
  }
  *(int *)(puVar7 + 5) = *(int *)(puVar7 + 5) + 1;
  goto LAB_002e47d0;
LAB_002e4660:
  puVar7 = (undefined8 *)*plVar9;
  goto joined_r0x002e46f0;
}


