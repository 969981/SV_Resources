/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275b250; name: FUN_0275b250
 */


void FUN_0275b250(long param_1,long *param_2)

{
  short sVar1;
  int iVar2;
  char *__s1;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  char *local_58;
  long *local_48;
  
  lVar5 = *param_2;
  iVar2 = (int)(short)((short)((uint)(*(int *)(lVar5 + 0x250) - *(int *)(lVar5 + 0x248)) >> 4) *
                      -0x5555);
  if (0 < iVar2) {
    iVar4 = 0;
    while( true ) {
      FUN_00e1561c(auStack_60,lVar5,iVar4);
      __s1 = local_58;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      iVar3 = strcmp(__s1,*(char **)(param_1 + 0x60));
      sVar1 = (short)iVar4;
      if (iVar3 == 0) {
        *(short *)(param_1 + 0xd0) = sVar1;
      }
      else {
        iVar4 = strcmp(__s1,*(char **)(param_1 + 0x80));
        if (iVar4 == 0) {
          *(short *)(param_1 + 0xd2) = sVar1;
        }
      }
      iVar4 = (int)(short)(sVar1 + 1);
      if (iVar2 <= iVar4) break;
      lVar5 = *param_2;
    }
  }
  return;
}


