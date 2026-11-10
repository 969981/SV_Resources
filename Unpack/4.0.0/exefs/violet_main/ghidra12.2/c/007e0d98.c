/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e0d98; name: FUN_007e0d98
 */


int FUN_007e0d98(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [32];
  undefined1 local_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x18) == lVar6 + 0x10) {
    iVar4 = 0;
  }
  else {
    uVar3 = (ulong)*(int *)(lVar6 + 0x24);
    lVar7 = (lVar6 + 0x10) - uVar3;
    lVar8 = *(long *)(lVar6 + 0x18) - uVar3;
    if (param_2 == 1) {
      iVar4 = 0;
      do {
        bVar1 = *(byte *)(lVar8 + 0x1c);
        bVar2 = *(byte *)(param_1 + 4);
        if (((bVar1 != bVar2) &&
            (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + (ulong)bVar2 * 8) + (ulong)bVar1 * 4) ==
             1)) && (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + (ulong)bVar1 * 8) +
                             (ulong)bVar2 * 4) == 1)) {
          lVar5 = *(long *)(lVar8 + 0x10);
          FUN_00796584(auStack_90);
          FUN_00796828(auStack_90,lVar5 + 8);
          local_70 = *(undefined1 *)(lVar5 + 0x28);
          uStack_6e = (undefined2)*(undefined4 *)(lVar8 + 0x18);
          local_68 = *(undefined8 *)(lVar5 + 0x30);
          lVar5 = param_3 + (long)iVar4 * 0x30;
          FUN_00796828(lVar5,auStack_90);
          iVar4 = iVar4 + 1;
          *(ulong *)(lVar5 + 0x20) =
               CONCAT44(uStack_6c,CONCAT22(uStack_6e,CONCAT11(uStack_6f,local_70)));
          *(undefined8 *)(lVar5 + 0x28) = local_68;
          uVar3 = (ulong)*(uint *)(lVar6 + 0x24);
        }
        lVar8 = *(long *)(lVar8 + (int)uVar3 + 8) + (long)-(int)uVar3;
      } while (lVar8 != lVar7);
    }
    else {
      iVar4 = 0;
      do {
        bVar1 = *(byte *)(lVar8 + 0x1c);
        bVar2 = *(byte *)(param_1 + 4);
        if ((bVar1 != bVar2) &&
           (((*(int *)(*(long *)(*(long *)(param_1 + 0x10) + (ulong)bVar2 * 8) + (ulong)bVar1 * 4)
              != 1 || (param_2 != 2)) ||
            (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + (ulong)bVar1 * 8) + (ulong)bVar2 * 4) !=
             1)))) {
          lVar5 = *(long *)(lVar8 + 0x10);
          FUN_00796584(auStack_90);
          FUN_00796828(auStack_90,lVar5 + 8);
          local_70 = *(undefined1 *)(lVar5 + 0x28);
          uStack_6e = (undefined2)*(undefined4 *)(lVar8 + 0x18);
          local_68 = *(undefined8 *)(lVar5 + 0x30);
          lVar5 = param_3 + (long)iVar4 * 0x30;
          FUN_00796828(lVar5,auStack_90);
          iVar4 = iVar4 + 1;
          *(ulong *)(lVar5 + 0x20) =
               CONCAT44(uStack_6c,CONCAT22(uStack_6e,CONCAT11(uStack_6f,local_70)));
          *(undefined8 *)(lVar5 + 0x28) = local_68;
          uVar3 = (ulong)*(uint *)(lVar6 + 0x24);
        }
        lVar8 = *(long *)(lVar8 + (int)uVar3 + 8) + (long)-(int)uVar3;
      } while (lVar8 != lVar7);
    }
  }
  return iVar4;
}


