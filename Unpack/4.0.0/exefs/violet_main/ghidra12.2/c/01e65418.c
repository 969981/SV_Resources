/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e65418; name: FUN_01e65418
 */


void FUN_01e65418(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0xc0);
  if (*plVar1 != param_2) {
    lVar2 = *(long *)(param_1 + 0xd0);
    if (lVar2 != param_2) {
      lVar3 = *(long *)(param_1 + 0xe0);
      if (lVar3 != param_2) {
        lVar4 = *(long *)(param_1 + 0xf0);
        if (lVar4 != param_2) {
          if (*plVar1 == 0) {
            lVar2 = 0;
          }
          else if (lVar2 == 0) {
            lVar2 = 1;
            plVar1 = (long *)(param_1 + 0xd0);
          }
          else if (lVar3 == 0) {
            lVar2 = 2;
            plVar1 = (long *)(param_1 + 0xe0);
          }
          else {
            if (lVar4 != 0) {
              return;
            }
            lVar2 = 3;
            plVar1 = (long *)(param_1 + 0xf0);
          }
          *plVar1 = param_2;
          *(undefined8 *)(param_1 + lVar2 * 0x10 + 200) = param_3;
        }
      }
    }
  }
  return;
}


