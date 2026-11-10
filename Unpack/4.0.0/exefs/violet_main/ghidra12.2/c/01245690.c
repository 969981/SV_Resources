/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01245690; name: FUN_01245690
 */


void FUN_01245690(long param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long ******pppppplVar6;
  undefined8 uVar7;
  long ******local_128 [18];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  long ******local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 auStack_48 [8];
  
  memset(local_128,0,0x8f);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x1280);
  FUN_01244704(lVar5,local_128);
  local_78 = (long ******)local_128;
  FUN_01243e3c(*(undefined8 *)(*(long *)(lVar5 + 0x78) + 0x17e0),auStack_48,&local_78);
  lVar5 = FUN_01249340(param_1);
  if ((local_88._6_1_ != '\0') &&
     (local_80 = CONCAT11((char)((ushort)local_80 >> 8),1), local_128[0] != (long ******)0x0)) {
    pppppplVar6 = local_128[0];
    do {
      iVar1 = (*(code *)(*pppppplVar6)[0x13])(pppppplVar6);
      uVar3 = (ulong)*(byte *)(lVar5 + 0x2420);
      if (uVar3 != 0) {
        piVar4 = (int *)(lVar5 + 8);
        do {
          if (*piVar4 == iVar1) {
            uVar7 = *(undefined8 *)(param_1 + 0x38);
            uVar2 = (*(code *)(*pppppplVar6)[0x13])(pppppplVar6);
            FUN_01244bd8(uVar7,uVar2,*param_2);
            local_70 = 1;
            local_68 = 0;
            local_78 = pppppplVar6;
            FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),auStack_48,&local_78);
            break;
          }
          piVar4 = piVar4 + 0x23;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar3 = (ulong)(byte)local_80;
      if (local_88._6_1_ <= (byte)local_80) {
        return;
      }
      local_80 = CONCAT11(local_80._1_1_,(byte)local_80 + 1);
      pppppplVar6 = local_128[uVar3];
    } while (pppppplVar6 != (long ******)0x0);
  }
  return;
}


