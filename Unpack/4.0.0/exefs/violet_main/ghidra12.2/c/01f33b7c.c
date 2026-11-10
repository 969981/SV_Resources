/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f33b7c; name: FUN_01f33b7c
 */


void FUN_01f33b7c(undefined8 *param_1,long param_2,void *param_3,undefined2 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long local_70;
  long lStack_68;
  undefined2 *local_60;
  undefined2 local_54 [2];
  
  local_54[0] = param_4;
  lVar6 = FUN_01981264();
  if ((lVar6 == 0) || (*(long *)(param_2 + 0x48) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    memcpy((void *)(param_2 + 0x50),param_3,0x50);
    if (*(char *)(param_2 + 0xa0) == '\0') {
      if (*(char *)((long)param_3 + 0x50) != '\0') {
        memcpy((void *)(param_2 + 0xa4),(void *)((long)param_3 + 0x54),0x28);
        *(undefined1 *)(param_2 + 0xa0) = 1;
      }
    }
    else if (*(char *)((long)param_3 + 0x50) == '\0') {
      *(undefined1 *)(param_2 + 0xa0) = 0;
    }
    else {
      memcpy((void *)(param_2 + 0xa4),(void *)((long)param_3 + 0x54),0x28);
    }
    lVar7 = 0;
    do {
      lVar1 = param_2 + lVar7;
      cVar5 = *(char *)((long)param_3 + lVar7 + 0x80);
      if (*(char *)(lVar1 + 0xd0) == '\0') {
        if (cVar5 != '\0') {
          memcpy((void *)(lVar1 + 0xd8),(void *)((long)param_3 + lVar7 + 0x88),0x28);
          *(undefined1 *)(lVar1 + 0xd0) = 1;
        }
      }
      else if (cVar5 == '\0') {
        *(undefined1 *)(lVar1 + 0xd0) = 0;
      }
      else {
        uVar2 = *(undefined8 *)((long)param_3 + lVar7 + 0x88);
        uVar3 = *(undefined8 *)((long)param_3 + lVar7 + 0x90);
        uVar4 = *(undefined8 *)((long)param_3 + lVar7 + 0xa0);
        *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)((long)param_3 + lVar7 + 0x98);
        *(undefined8 *)(lVar1 + 0xf0) = uVar4;
        *(undefined8 *)(lVar1 + 0xd8) = uVar2;
        *(undefined8 *)(lVar1 + 0xe0) = uVar3;
        *(undefined8 *)(lVar1 + 0xf8) = *(undefined8 *)((long)param_3 + lVar7 + 0xa8);
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != 0x480);
    local_60 = local_54;
    local_70 = param_2;
    lStack_68 = lVar6;
    FUN_01f491e0(param_1,&local_70);
  }
  return;
}


