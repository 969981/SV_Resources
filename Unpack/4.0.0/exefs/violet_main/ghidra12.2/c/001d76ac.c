/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d76ac; name: FUN_001d76ac
 */


void FUN_001d76ac(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x1e8);
  if (*(long *)(lVar5 + 0x220) != 0) {
    FUN_001d4730(lVar5 + 0x220);
    FUN_001d4730(lVar5 + 0x230);
    lVar2 = *(long *)(lVar5 + 0x288);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar5 + 0x290);
      while (lVar3 != 0) {
        FUN_001ec308(*(undefined8 *)(lVar2 + lVar3 * 8 + -8));
        lVar3 = *(long *)(lVar5 + 0x290) + -1;
        lVar2 = *(long *)(lVar5 + 0x288);
        *(long *)(lVar5 + 0x290) = lVar3;
      }
      FUN_001ec308();
      *(undefined8 *)(lVar5 + 0x288) = 0;
    }
  }
  if (param_1[0xaa] != 0) {
    if ((param_2 & 1) != 0) {
      iVar1 = FUN_001fa1f0(param_1[0xaa],0,*(undefined4 *)(lVar5 + 0x218),5);
      if (iVar1 == 0) {
        FUN_001efc1c(param_1[0xaa]);
      }
      if (*(int *)(lVar5 + 0x218) == (int)param_1[0xbb]) {
        FUN_001db818(lVar4,"stopped the pause stream!\n");
        *(undefined4 *)(param_1 + 0xbb) = 0;
      }
    }
    if (*(long *)(lVar4 + 0x1520) != 0) {
      param_1[0xbc] = param_1[0xbc] - *(long *)(lVar4 + 0x1520);
      *(undefined8 *)(lVar4 + 0x1520) = 0;
    }
    if (0 < *(int *)(lVar5 + 0x218)) {
      iVar1 = FUN_001f3790(param_1[0xaa],*(int *)(lVar5 + 0x218),0);
      if (iVar1 != 0) {
        FUN_001db818(lVar4,"http/2: failed to clear user_data for stream %d!\n",
                     *(undefined4 *)(lVar5 + 0x218));
      }
      *(undefined4 *)(lVar5 + 0x218) = 0;
    }
  }
  return;
}


