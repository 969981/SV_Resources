/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159ad64; name: FUN_0159ad64
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0159ad64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *******local_78;
  undefined8 *******pppppppuStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  local_78 = &local_78;
  local_48 = 0;
  local_68 = 0;
  uStack_50 = 0;
  pppppppuStack_70 = local_78;
  lVar1 = *(long *)(param_1 + 8);
joined_r0x0159ad9c:
  do {
    if (param_1 == lVar1) {
      FUN_0159ae74(&local_78);
      return;
    }
    lVar2 = *(long *)(lVar1 + 0x10);
    lVar3 = lVar1;
    if (((*(int *)(lVar2 + 0x2c) == (int)param_2) &&
        (iVar4 = (int)((ulong)param_2 >> 0x20), *(int *)(lVar2 + 0x30) == iVar4)) &&
       (*(long *)(lVar2 + 0x60) == param_3)) {
      do {
        lVar3 = *(long *)(lVar3 + 8);
        if (param_1 == lVar3) {
          FUN_02004d74(&local_78,&local_78,param_1,lVar1,lVar3);
          lVar1 = lVar3;
          goto joined_r0x0159ad9c;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
      } while (((*(int *)(lVar2 + 0x2c) == (int)param_2) && (*(int *)(lVar2 + 0x30) == iVar4)) &&
              (*(long *)(lVar2 + 0x60) == param_3));
      FUN_02004d74(&local_78,&local_78,param_1,lVar1,lVar3);
    }
    lVar1 = *(long *)(lVar3 + 8);
  } while( true );
}


