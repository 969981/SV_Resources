/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fee78; name: FUN_007fee78
 */


void FUN_007fee78(long param_1,void *param_2,uint param_3,undefined4 *param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *__src;
  
  lVar5 = *(long *)(param_1 + 0x1320);
  if (((lVar5 != 0) && (*(int *)(param_1 + 0x1328) != 0)) &&
     (iVar3 = *(int *)(param_1 + 0x1330), iVar3 != *(int *)(param_1 + 0x132c))) {
    lVar6 = lVar5 + (long)iVar3 * 0x5d0;
    uVar1 = *(uint *)(lVar6 + 0x5c0);
    if (uVar1 <= param_3) {
      __src = (void *)(lVar5 + (long)iVar3 * 0x5d0);
      memcpy(param_2,__src,(ulong)uVar1);
      *param_4 = *(undefined4 *)(lVar6 + 0x5c0);
      *param_5 = *(undefined8 *)((long)__src + 0x5c8);
      iVar2 = *(int *)(param_1 + 0x1328);
      iVar3 = *(int *)(param_1 + 0x1330) + 1;
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar3 / iVar2;
      }
      *(int *)(param_1 + 0x1330) = iVar3 - iVar4 * iVar2;
      return;
    }
  }
  *param_4 = 0;
  return;
}


