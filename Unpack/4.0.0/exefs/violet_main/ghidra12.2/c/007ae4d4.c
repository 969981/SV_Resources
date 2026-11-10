/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ae4d4; name: FUN_007ae4d4
 */


void FUN_007ae4d4(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_50[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
    FUN_00cbd7c0(param_1,local_50);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_2 + 0x60));
    if (*(short *)(param_2 + 0x92) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        FUN_007965d8(*(long *)(param_2 + 0x80) + lVar3);
        *(undefined2 *)(*(long *)(param_2 + 0x88) + uVar4 * 2) = 0;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar4 < *(ushort *)(param_2 + 0x92));
    }
    *(undefined1 *)(param_2 + 0x90) = 0xfd;
    lVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    if (*(long *)(lVar3 + 0x98) != 0) {
      *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(*(long *)(lVar3 + 0x98) + 0x28);
    }
    for (lVar5 = *(long *)(lVar3 + 0x20); lVar5 != lVar3 + 0x18; lVar5 = *(long *)(lVar5 + 8)) {
      lVar2 = *(long *)(lVar5 + 0x10);
      if (*(char *)(lVar2 + 0x3a) == '\x02') {
        bVar1 = *(byte *)(lVar2 + 0x28);
        if (((uint)bVar1 != (uint)*(byte *)(param_2 + 0x90)) &&
           ((uint)bVar1 <= (uint)*(ushort *)(param_2 + 0x92) &&
            (uint)*(ushort *)(param_2 + 0x92) != (uint)bVar1)) {
          FUN_00796828(*(long *)(param_2 + 0x80) + (ulong)bVar1 * 0x20,lVar2 + 8);
          *(undefined2 *)(*(long *)(param_2 + 0x88) + (ulong)(uint)bVar1 * 2) =
               *(undefined2 *)(*(long *)(lVar5 + 0x10) + 0x38);
        }
      }
    }
    local_50[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
    FUN_00cbd7c0(param_1,local_50);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x60));
  }
  return;
}


