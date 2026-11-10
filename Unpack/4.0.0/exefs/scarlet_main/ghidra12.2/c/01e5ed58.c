/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5ed58; name: FUN_01e5ed58
 */


void FUN_01e5ed58(undefined8 *param_1,long *param_2,uint param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  ulong __n;
  
  *param_1 = param_2;
  param_1[1] = 0;
  __n = (ulong)param_3;
  pvVar1 = (void *)(**(code **)(*param_2 + 0x10))(param_2,__n,1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    lVar4 = *(long *)(lVar3 + 0x80) + 1;
    *(long *)(lVar3 + 0x80) = lVar4;
    if (param_3 != 0) {
      memset(pvVar1,0,__n);
      lVar4 = *(long *)(lVar3 + 0x80);
    }
    param_1[2] = pvVar1;
    param_1[3] = param_2;
    param_1[4] = __n;
    param_1[5] = 1;
    *(long *)(lVar3 + 0x80) = lVar4 + -1;
    pvVar1 = (void *)param_1[2];
  }
  memset(param_1 + 6,0,0x4c);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 0x14) = param_3;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  param_1[0x15] = pvVar1;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  memset(pvVar1,0,__n);
  return;
}


