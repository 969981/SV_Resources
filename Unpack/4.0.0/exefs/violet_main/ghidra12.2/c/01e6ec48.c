/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6ec48; name: FUN_01e6ec48
 */


void FUN_01e6ec48(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 local_50;
  undefined2 local_4c;
  long *local_48 [4];
  int local_28 [2];
  
  FUN_01267a34(local_48,param_2,param_3);
  if (local_48[0] != (long *)0x0) {
    lVar3 = *local_48[0];
    lVar6 = local_48[0][2];
    lVar5 = lVar6 + 1;
    bVar1 = *(byte *)(lVar3 + lVar6);
    local_48[0][2] = lVar5;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(lVar3 + lVar5);
        lVar5 = lVar6 + 2;
        local_48[0][2] = lVar5;
      }
      if (bVar1 == 2) {
        local_4c = 0xffff;
        local_50 = 0xffffffff;
        cVar2 = *(char *)(lVar3 + lVar5);
        local_48[0][2] = lVar5 + 1;
        if (((cVar2 == -0x47) && (FUN_01e6ed80(local_28,&local_50), local_28[0] == 0)) &&
           ((plVar4 = (long *)(param_1 + 0x68), *plVar4 == param_4 ||
            (((plVar4 = (long *)(param_1 + 0x78), *plVar4 == param_4 ||
              (plVar4 = (long *)(param_1 + 0x88), *plVar4 == param_4)) ||
             (plVar4 = (long *)(param_1 + 0x98), *plVar4 == param_4)))))) {
          *(undefined1 *)(plVar4 + 1) = 1;
          *(undefined2 *)((long)plVar4 + 0xd) = local_4c;
          *(undefined4 *)((long)plVar4 + 9) = local_50;
        }
      }
      else if (((bVar1 == 1) && (*(long *)(param_1 + 0x60) != param_4)) &&
              (*(char *)(param_1 + 0xa9) != '\0')) {
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
    }
  }
  FUN_01267b4c(local_48);
  return;
}


