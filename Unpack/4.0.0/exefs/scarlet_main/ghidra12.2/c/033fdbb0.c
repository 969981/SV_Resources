/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033fdbb0; name: FUN_033fdbb0
 */


void FUN_033fdbb0(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  undefined1 *__s;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fStack_90;
  undefined1 auStack_8c [4];
  size_t local_88;
  long local_78;
  
  uVar1 = *(ushort *)((long)param_4 + 0x12);
  __s = auStack_8c + (-4 - ((ulong)((uint)uVar1 * 4 + 0xf) & 0x7fff0));
  if (param_5 != 0) {
    local_88 = (ulong)uVar1 << 2;
    lVar4 = 0;
    uVar5 = 0;
    if (uVar1 == 0) {
      do {
        local_78 = *param_4 + uVar5 * *(ushort *)(param_4 + 2);
        memset(__s,0,local_88);
        FUN_033fe550(0x3f800000,param_1,param_2,*(undefined4 *)(param_3 + 0x44),
                     *(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x30),&local_78,__s,1
                     ,uVar1,*(long *)(param_3 + 0x38) + lVar4);
        uVar5 = uVar5 + 4;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_5 * 4 != uVar5);
    }
    else {
      do {
        uVar2 = *(ushort *)(param_4 + 2);
        lVar6 = *param_4;
        local_78 = lVar6 + uVar5 * uVar2 * 4;
        memset(__s,0,local_88);
        lVar3 = 0;
        do {
          fVar7 = *(float *)(lVar6 + lVar4 * (ulong)uVar2 + lVar3);
          *(float *)(__s + lVar3) = *(float *)(__s + lVar3) + fVar7 * fVar7;
          lVar3 = lVar3 + 4;
        } while (__s + lVar3 < __s + (ulong)uVar1 * 4);
        FUN_033fe550(0x3f800000,param_1,param_2,*(undefined4 *)(param_3 + 0x44),
                     *(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x30),&local_78,__s,1
                     ,uVar1,*(long *)(param_3 + 0x38) + uVar5 * 8);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar5 != param_5);
    }
  }
  return;
}


