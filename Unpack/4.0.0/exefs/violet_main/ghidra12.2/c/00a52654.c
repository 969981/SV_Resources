/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a52654; name: FUN_00a52654
 */


int FUN_00a52654(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar4 = 0;
  lVar5 = -0x6030;
  do {
    lVar1 = param_1 + 0x2c + lVar5;
    local_48 = *(undefined8 *)(lVar1 + 0x6030);
    local_40 = *(undefined8 *)(lVar1 + 0x6038);
    uStack_38 = *(undefined8 *)(lVar1 + 0x6040);
    uVar3 = FUN_00a664ac(&local_48,0);
    if (((((uVar3 & 1) != 0) || (uVar3 = FUN_00a664ac(&local_48,1), (uVar3 & 1) != 0)) ||
        (uVar3 = FUN_00a664ac(&local_48,2), (uVar3 & 1) != 0)) &&
       ((((uVar3 = FUN_00a65174(&local_48,0,0), (uVar3 & 1) != 0 ||
          (uVar3 = FUN_00a65174(&local_48,0,1), (uVar3 & 1) != 0)) ||
         ((uVar3 = FUN_00a65174(&local_48,1,0), (uVar3 & 1) != 0 ||
          ((uVar3 = FUN_00a65174(&local_48,1,1), (uVar3 & 1) != 0 ||
           (uVar3 = FUN_00a65174(&local_48,2,0), (uVar3 & 1) != 0)))))) ||
        (uVar3 = FUN_00a65174(&local_48,2,1), (uVar3 & 1) != 0)))) {
      uVar2 = FUN_00a66638(&local_48);
      iVar4 = iVar4 + (uVar2 & 1);
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0);
  return iVar4;
}


