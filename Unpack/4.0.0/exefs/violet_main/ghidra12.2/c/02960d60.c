/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02960d60; name: FUN_02960d60
 */


void FUN_02960d60(long param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  lVar3 = FUN_0129b478(uVar4,0,param_2);
  if (lVar3 != 0) {
    do {
      if (*(short *)(lVar3 + 0x30) == param_3) {
        if (*(char *)(lVar3 + 0x44) != '\0') {
          if (*(char *)(lVar3 + 0x3f) == '\0') {
            FUN_014608e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
          }
          else {
            FUN_01460cdc(lVar3,1);
          }
        }
        lVar3 = FUN_0129b478(uVar4,0,param_2);
      }
      else {
        cVar2 = *(char *)(lVar3 + 0x28);
        iVar1 = *(int *)(lVar3 + 0x34);
        lVar3 = FUN_0107ba54(*(undefined8 *)(lVar3 + 8),*(undefined2 *)(lVar3 + 0x14));
        if (lVar3 == 0) {
          return;
        }
        while (((*(char *)(lVar3 + 0x28) != cVar2 || (*(int *)(lVar3 + 0x34) != iVar1)) ||
               (*(char *)(lVar3 + 0x41) != '\0'))) {
          lVar3 = FUN_0107ba54(*(undefined8 *)(lVar3 + 8),*(undefined2 *)(lVar3 + 0x14));
          if (lVar3 == 0) {
            return;
          }
        }
      }
    } while (lVar3 != 0);
  }
  return;
}


