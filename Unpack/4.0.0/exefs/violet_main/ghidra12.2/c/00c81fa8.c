/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c81fa8; name: FUN_00c81fa8
 */


byte FUN_00c81fa8(long param_1,int param_2,undefined4 param_3,undefined2 param_4,uint param_5,
                 byte param_6)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  undefined4 local_44;
  
  iVar1 = 0x2d;
  if ((param_2 == 0x2011 & param_6) == 0) {
    iVar1 = param_2;
  }
  uVar3 = FUN_00888360(param_1,&local_44,param_4,iVar1);
  if ((uVar3 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    lVar6 = param_1 + 0x30;
    lVar4 = FUN_00888fbc(lVar6,iVar1,param_3,local_44);
    if (lVar4 == 0) {
      plVar5 = (long *)FUN_00889004(lVar6,iVar1,param_3,local_44);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(param_1 + 0x70);
        if (plVar5 != *(long **)(param_1 + 0x78)) {
          iVar8 = 0;
          plVar7 = *(long **)(param_1 + 0x78);
          do {
            plVar9 = (long *)plVar7[1];
            if ((*(byte *)(plVar7 + 7) & 0x11) == 0) {
              if (plVar5 != plVar7) {
                lVar4 = *plVar9;
                *(long **)(*plVar7 + 8) = plVar9;
                *plVar9 = *plVar7;
                *(long **)(lVar4 + 8) = plVar7;
                *plVar7 = lVar4;
              }
              FUN_00889230(lVar6,(int)plVar7[6],*(undefined2 *)((long)plVar7 + 0x36),
                           *(undefined2 *)((long)plVar7 + 0x34));
              iVar8 = iVar8 + 1;
            }
            plVar7 = plVar9;
          } while (plVar5 != plVar9);
          if (iVar8 != 0) {
            bVar2 = FUN_00c81fa8(param_1,iVar1,param_3,local_44,param_5,0);
            goto LAB_00c8204c;
          }
        }
        bVar2 = 0;
        *(undefined4 *)(param_1 + 0x1bcc) = 1;
      }
      else {
        *(byte *)(plVar5 + 7) = *(byte *)(plVar5 + 7) | 3;
        if (-1 < (int)param_5) {
          *(uint *)((long)plVar5 + 0x3c) =
               *(uint *)((long)plVar5 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
        }
        lVar6 = *plVar5;
        plVar7 = (long *)(param_1 + 0x50);
        *plVar5 = *plVar7;
        *(long **)(lVar6 + 8) = plVar7;
        *(long **)(*plVar7 + 8) = plVar5;
        *plVar7 = lVar6;
        bVar2 = 1;
      }
    }
    else {
      bVar2 = *(byte *)(lVar4 + 0x38);
      *(byte *)(lVar4 + 0x38) = bVar2 | 1;
      if (-1 < (int)param_5) {
        *(uint *)(lVar4 + 0x3c) = *(uint *)(lVar4 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
      }
      bVar2 = bVar2 >> 1 & 1;
    }
  }
LAB_00c8204c:
  return bVar2 & 1;
}


