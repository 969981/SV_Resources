/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0129b2a0; name: FUN_0129b2a0
 */


undefined8 FUN_0129b2a0(long param_1,long *param_2,short param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 local_44 [4];
  
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = FUN_0129b478(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),0,uVar4);
  if (lVar5 == 0) {
LAB_0129b2f4:
    uVar7 = 1;
    psVar8 = &DAT_045f7d70;
    do {
      if (psVar8[-8] == param_3) {
        uVar7 = uVar7 - 1;
LAB_0129b338:
        lVar5 = (**(code **)((uVar7 & 0xffffffff) * 0x10 + 0x45f7d68))(local_44);
        if (lVar5 == 0) {
          return 0;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x80);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
        lVar6 = FUN_0129baac(uVar10,0xffffffff);
        if (lVar6 == 0) {
          return 1;
        }
        *(undefined4 *)(lVar6 + 0x12) = 0xee00ee;
        memset((void *)(lVar6 + 0x18),0,0x58);
        *(uint *)(lVar6 + 0x2c) = param_4 | 0x7000000;
        *(undefined1 *)(lVar6 + 0x28) = 0;
        *(long *)(lVar6 + 0x20) = lVar5;
        *(undefined1 *)(lVar6 + 0x3e) = local_44[0];
        *(short *)(lVar6 + 0x30) = param_3;
        *(undefined4 *)(lVar6 + 0x34) = uVar4;
        *(undefined4 *)(lVar6 + 0x38) = uVar4;
        *(short *)(lVar6 + 0x3c) = (short)uVar1;
        *(undefined1 *)(lVar6 + 0x44) = 1;
        FUN_0129b6cc(uVar10,lVar6);
        return 1;
      }
      if (*psVar8 == param_3) goto LAB_0129b338;
      uVar7 = uVar7 + 2;
      psVar8 = psVar8 + 0x10;
    } while (uVar7 != 0x17d);
  }
  else if (*(short *)(lVar5 + 0x30) != param_3) {
    cVar3 = *(char *)(lVar5 + 0x28);
    iVar9 = 0;
    iVar2 = *(int *)(lVar5 + 0x34);
    do {
      lVar5 = FUN_0107ba54(*(undefined8 *)(lVar5 + 8),*(undefined2 *)(lVar5 + 0x14));
      if (lVar5 == 0) goto LAB_0129b2f4;
      iVar9 = iVar9 + 1;
      while (((*(char *)(lVar5 + 0x28) != cVar3 || (*(int *)(lVar5 + 0x34) != iVar2)) ||
             (*(char *)(lVar5 + 0x41) != '\0'))) {
        lVar5 = FUN_0107ba54(*(undefined8 *)(lVar5 + 8),*(undefined2 *)(lVar5 + 0x14));
        if (lVar5 == 0) goto LAB_0129b2f4;
      }
    } while ((iVar9 != 8) && (*(short *)(lVar5 + 0x30) != param_3));
  }
  return 0;
}


