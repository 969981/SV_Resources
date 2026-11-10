/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034836a8; name: FUN_034836a8
 */


void FUN_034836a8(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (DAT_048afd98 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    puVar3 = DAT_048afd98;
    do {
      lVar4 = puVar3[1];
      if ((*(long *)(lVar4 + 0x250) == 0) && ((*(byte *)((long)puVar3 + 0x14) & 0xfe) == 0)) {
        if (((*(byte *)(lVar4 + 700) >> 4 & 1) == 0) || (*(int *)(lVar4 + 0x318) != -1)) {
          iVar2 = FUN_034ee8b0();
          puVar6 = (undefined8 *)*puVar3;
          if (iVar2 == 1) goto LAB_0348371c;
          puVar7 = &DAT_048afd98;
          if (DAT_048afd98 != puVar3) {
            puVar7 = puVar5;
          }
          *puVar7 = puVar6;
          if (DAT_048afda0 == puVar3) {
            DAT_048afda0 = puVar5;
          }
          if ((puVar3 < DAT_048afdb0) || (DAT_048afdb0 + (ulong)DAT_048afdb8 * 3 <= puVar3)) {
            (**(code **)(puVar1 + 0x30))(5,puVar3);
          }
          else {
            *puVar3 = DAT_048afda8;
            DAT_048afda8 = puVar3;
          }
          DAT_048afdbc = DAT_048afdbc + -1;
          puVar3 = puVar6;
        }
        else {
          puVar7 = (undefined8 *)*puVar3;
          puVar6 = &DAT_048afd98;
          if (DAT_048afd98 != puVar3) {
            puVar6 = puVar5;
          }
          *puVar6 = puVar7;
          if (DAT_048afda0 == puVar3) {
            DAT_048afda0 = puVar5;
          }
          if ((puVar3 < DAT_048afdb0) || (DAT_048afdb0 + (ulong)DAT_048afdb8 * 3 <= puVar3)) {
            (**(code **)(puVar1 + 0x30))(5,puVar3);
          }
          else {
            *puVar3 = DAT_048afda8;
            DAT_048afda8 = puVar3;
          }
          DAT_048afdbc = DAT_048afdbc + -1;
          *(undefined8 *)(lVar4 + 0x250) = 0;
          FUN_034e8708(0,lVar4,4,1);
          puVar3 = puVar7;
        }
      }
      else {
        puVar6 = (undefined8 *)*puVar3;
LAB_0348371c:
        puVar5 = puVar3;
        puVar3 = puVar6;
      }
    } while (puVar3 != (undefined8 *)0x0);
  }
  DAT_048afdc0 = 0;
  return;
}


