/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014dc030; name: FUN_014dc030
 */


void FUN_014dc030(long param_1,long *param_2,short param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = FUN_0129b478(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),0,uVar3);
  if (lVar4 != 0) {
    do {
      cVar2 = *(char *)(lVar4 + 0x28);
      iVar1 = *(int *)(lVar4 + 0x34);
      lVar5 = lVar4;
      do {
        lVar5 = FUN_0107ba54(*(undefined8 *)(lVar5 + 8),*(undefined2 *)(lVar5 + 0x14));
        if (lVar5 == 0) break;
      } while (((*(char *)(lVar5 + 0x28) != cVar2) || (*(int *)(lVar5 + 0x34) != iVar1)) ||
              (*(char *)(lVar5 + 0x41) != '\0'));
      if (((*(short *)(lVar4 + 0x30) == param_3) && (*(int *)(lVar4 + 0x68) == 0)) &&
         (*(char *)(lVar4 + 0x44) != '\0')) {
        if (*(char *)(lVar4 + 0x3f) == '\0') {
          FUN_014608e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),lVar4);
        }
        else {
          FUN_01460cdc(lVar4,1);
        }
      }
      lVar4 = lVar5;
    } while (lVar5 != 0);
  }
  return;
}


