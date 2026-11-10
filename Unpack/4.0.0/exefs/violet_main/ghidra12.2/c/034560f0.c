/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034560f0; name: FUN_034560f0
 */


undefined8 FUN_034560f0(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  
  if ((param_2 != (long *)0x0) && (*(int *)(param_1 + 0x30) != 0)) {
    plVar3 = (long *)FUN_0344ec90(*(undefined8 *)PTR_DAT_047e6f28,*(int *)(param_1 + 0x30),
                                  *(byte *)(param_1 + 0x36) >> 6 & 1);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    uVar1 = *(uint *)(param_2 + 1);
    if (uVar1 == 0) {
      lVar4 = 0;
      bVar2 = false;
      plVar7 = plVar3;
      do {
        if (bVar2) {
          bVar2 = true;
        }
        else {
          lVar4 = plVar7[0x14];
          bVar2 = lVar4 != 0;
        }
        plVar7 = (long *)plVar7[0x13];
      } while (plVar7 != (long *)0x0);
    }
    else {
      lVar4 = 0;
      bVar2 = false;
      plVar7 = plVar3;
      do {
        pbVar5 = (byte *)(*param_2 + 4);
        lVar6 = (ulong)uVar1 << 3;
        do {
          if (((int)plVar7[3] == *(int *)(pbVar5 + -4)) &&
             ((*(uint *)((long)plVar7 + 0xda) >> 0x11 & 1) == (uint)*pbVar5)) goto LAB_03456244;
          lVar6 = lVar6 + -8;
          pbVar5 = pbVar5 + 8;
        } while (lVar6 != 0);
        if (bVar2) {
          bVar2 = true;
        }
        else {
          lVar4 = plVar7[0x14];
          bVar2 = lVar4 != 0;
        }
        plVar7 = (long *)plVar7[0x13];
      } while (plVar7 != (long *)0x0);
    }
    if (lVar4 != 0) {
      if (uVar1 == 0) {
        do {
          lVar4 = *(long *)(lVar4 + 0xa0);
        } while (lVar4 != 0);
      }
      else {
        do {
          pbVar5 = (byte *)(*param_2 + 4);
          lVar6 = (ulong)uVar1 << 3;
          do {
            if ((*(int *)(lVar4 + 0x18) == *(int *)(pbVar5 + -4)) &&
               ((*(uint *)(lVar4 + 0xda) >> 0x11 & 1) == (uint)*pbVar5)) {
LAB_03456244:
              (**(code **)(*plVar3 + 0x30))();
              return 1;
            }
            lVar6 = lVar6 + -8;
            pbVar5 = pbVar5 + 8;
          } while (lVar6 != 0);
          lVar4 = *(long *)(lVar4 + 0xa0);
        } while (lVar4 != 0);
      }
    }
    (**(code **)(*plVar3 + 0x30))();
  }
  return 0;
}


