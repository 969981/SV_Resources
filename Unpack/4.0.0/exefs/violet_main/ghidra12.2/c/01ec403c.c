/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec403c; name: FUN_01ec403c
 */


void FUN_01ec403c(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)((long)param_1 + 0x8d);
  if ((ulong)bVar1 != 0) {
    if ((char)param_1[0x1e] == '\0') {
      (**(code **)(*param_1 + 0x70))(param_1,0,2);
    }
    if (bVar1 != 1) {
      if (*(char *)((long)param_1 + 0xf1) == '\0') {
        (**(code **)(*param_1 + 0x70))(param_1,1,2);
      }
      if (bVar1 != 2) {
        if (*(char *)((long)param_1 + 0xf2) == '\0') {
          (**(code **)(*param_1 + 0x70))(param_1,2,2);
        }
        if (bVar1 != 3) {
          if (*(char *)((long)param_1 + 0xf3) == '\0') {
            (**(code **)(*param_1 + 0x70))(param_1,3,2);
          }
          if (bVar1 != 4) {
            if (*(char *)((long)param_1 + 0xf4) == '\0') {
              (**(code **)(*param_1 + 0x70))(param_1,4,2);
            }
            if (bVar1 != 5) {
              if (*(char *)((long)param_1 + 0xf5) == '\0') {
                (**(code **)(*param_1 + 0x70))(param_1,5,2);
              }
              if (bVar1 != 6) {
                lVar2 = (ulong)bVar1 - 6;
                do {
                  lVar2 = lVar2 + -1;
                } while (lVar2 != 0);
              }
            }
          }
        }
      }
    }
  }
  return;
}


