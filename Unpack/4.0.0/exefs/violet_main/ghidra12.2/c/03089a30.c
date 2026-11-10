/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03089a30; name: FUN_03089a30
 */


void FUN_03089a30(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *__src;
  void *__src_00;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a0 [48];
  
LAB_03089a70:
  lVar1 = param_1 + (long)(param_2 + param_3 >> 1) * 0x30;
  fVar4 = *(float *)(lVar1 + 0x10);
  fVar5 = *(float *)(lVar1 + 0x14);
  fVar6 = *(float *)(lVar1 + 0x18);
  iVar2 = param_2;
  iVar3 = param_3;
LAB_03089a8c:
  __src = (void *)(param_1 + (long)iVar2 * 0x30);
  do {
    if (ABS(*(float *)((long)__src + 0x10) - fVar4) <= 1e-05) {
      if (ABS(*(float *)((long)__src + 0x14) - fVar5) <= 1e-05) {
        if (fVar6 <= *(float *)((long)__src + 0x18)) break;
      }
      else if (fVar5 <= *(float *)((long)__src + 0x14)) break;
    }
    else if (*(float *)((long)__src + 0x10) <= fVar4) break;
    __src = (void *)((long)__src + 0x30);
    iVar2 = iVar2 + 1;
  } while( true );
  __src_00 = (void *)(param_1 + (long)iVar3 * 0x30);
  do {
    if (ABS(fVar4 - *(float *)((long)__src_00 + 0x10)) <= 1e-05) {
      if (ABS(fVar5 - *(float *)((long)__src_00 + 0x14)) <= 1e-05) {
        if (*(float *)((long)__src_00 + 0x18) <= fVar6) break;
      }
      else if (*(float *)((long)__src_00 + 0x14) <= fVar5) break;
    }
    else if (fVar4 <= *(float *)((long)__src_00 + 0x10)) break;
    __src_00 = (void *)((long)__src_00 + -0x30);
    iVar3 = iVar3 + -1;
  } while( true );
  if (iVar2 <= iVar3) {
    if (iVar2 != iVar3) {
      memcpy(auStack_a0,__src_00,0x30);
      memcpy(__src_00,__src,0x30);
      memcpy(__src,auStack_a0,0x30);
    }
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1;
  }
  if (iVar3 < iVar2) goto code_r0x03089bb4;
  goto LAB_03089a8c;
code_r0x03089bb4:
  if (param_2 < iVar3) {
    FUN_03089a30(param_1,param_2,iVar3);
  }
  param_2 = iVar2;
  if (param_3 <= iVar2) {
    return;
  }
  goto LAB_03089a70;
}


