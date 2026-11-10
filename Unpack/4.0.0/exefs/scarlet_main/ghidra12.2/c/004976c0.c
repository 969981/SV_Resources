/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004976c0; name: FUN_004976c0
 */


void FUN_004976c0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  ushort *puVar5;
  
  iVar1 = FUN_0047e430();
  if (0 < iVar1) {
    FUN_003e6880(param_2,"%*s%s:\n",param_3,&DAT_03c886bc,param_4);
  }
  iVar1 = FUN_0047e430(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_0047e450(param_1,iVar1);
      FUN_003e6880(param_2,&DAT_03ca4ee3,param_3 + 2,&DAT_03c886bc);
      if (*(int *)*puVar3 == 7) {
        piVar4 = *(int **)((int *)*puVar3 + 2);
        iVar2 = *piVar4;
        puVar5 = *(ushort **)(piVar4 + 2);
        FUN_003e9110(param_2,&DAT_03c6294b);
        if (iVar2 == 0x20) {
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((*puVar5 & 0xff00) << 8 | (uint)*puVar5 << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[1] & 0xff00) << 8 | (uint)puVar5[1] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[2] & 0xff00) << 8 | (uint)puVar5[2] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[3] & 0xff00) << 8 | (uint)puVar5[3] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[4] & 0xff00) << 8 | (uint)puVar5[4] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[5] & 0xff00) << 8 | (uint)puVar5[5] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[6] & 0xff00) << 8 | (uint)puVar5[6] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[7] & 0xff00) << 8 | (uint)puVar5[7] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03bdfb3b);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[8] & 0xff00) << 8 | (uint)puVar5[8] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[9] & 0xff00) << 8 | (uint)puVar5[9] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[10] & 0xff00) << 8 | (uint)puVar5[10] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[0xb] & 0xff00) << 8 | (uint)puVar5[0xb] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[0xc] & 0xff00) << 8 | (uint)puVar5[0xc] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[0xd] & 0xff00) << 8 | (uint)puVar5[0xd] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[0xe] & 0xff00) << 8 | (uint)puVar5[0xe] << 0x18) >> 0x10);
          FUN_003e9110(param_2,&DAT_03c9c9c5);
          FUN_003e6880(param_2,&DAT_03bfbca5,
                       ((puVar5[0xf] & 0xff00) << 8 | (uint)puVar5[0xf] << 0x18) >> 0x10);
        }
        else if (iVar2 == 8) {
          FUN_003e6880(param_2,"%d.%d.%d.%d/%d.%d.%d.%d",(char)*puVar5,
                       *(undefined1 *)((long)puVar5 + 1),(char)puVar5[1],
                       *(undefined1 *)((long)puVar5 + 3),(char)puVar5[2],
                       *(undefined1 *)((long)puVar5 + 5),(char)puVar5[3],
                       *(undefined1 *)((long)puVar5 + 7));
        }
        else {
          FUN_003e6880(param_2,"IP Address:<invalid>");
        }
      }
      else {
        FUN_004944b0(param_2);
      }
      FUN_003e9110(param_2,&DAT_03c67c74);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_1);
    } while (iVar1 < iVar2);
  }
  return;
}


