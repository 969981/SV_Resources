/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00adcd88; name: FUN_00adcd88
 */


uint FUN_00adcd88(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *local_990 [4];
  undefined1 auStack_96c [2340];
  undefined8 local_48;
  undefined1 *local_28;
  
  memset(auStack_96c,0,0x921);
  local_48 = 0x921;
  local_28 = auStack_96c;
  FUN_01752300(local_990,DAT_0485f2f0,&local_28,&local_48);
  puVar2 = local_990[0];
  if (local_990[0] != (undefined8 *)0x0) {
    lVar4 = FUN_0111b030(param_2);
    if ((ulong)(puVar2[3] + lVar4) <= (ulong)puVar2[2]) {
      *(char *)(puVar2[1] + puVar2[3]) = (char)param_2;
      puVar2[3] = puVar2[3] + 1;
      if (((((local_990[0] != (undefined8 *)0x0) &&
            (FUN_01e60d84(&local_28,param_1 + 0xc2,local_990[0] + 1), (int)local_28 == 0)) &&
           (lVar4 = *(long *)(param_1 + 0x58), lVar4 != 0)) &&
          ((*(char *)(lVar4 + 0xa0) != '\0' ||
           ((*(long *)(lVar4 + 0x88) != 0 && (*(short *)(*(long *)(lVar4 + 0x88) + 0x1a) != 0))))))
         && ((plVar5 = *(long **)(lVar4 + 0x98), plVar5 != (long *)0x0 &&
             (uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar4 + 0x41,lVar4 + 0xa8),
             (uVar6 & 1) != 0)))) {
        if (local_990[0] == (undefined8 *)0x0) {
          uVar7 = 0;
          uVar1 = 0;
        }
        else {
          uVar7 = *local_990[0];
          uVar1 = *(undefined4 *)(local_990[0] + 3);
        }
        uVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x70))
                          (*(long **)(param_1 + 0x58),uVar7,uVar1);
        goto LAB_00adce38;
      }
    }
  }
  uVar3 = 0;
LAB_00adce38:
  FUN_01694aa8(local_990);
  return uVar3 & 1;
}


