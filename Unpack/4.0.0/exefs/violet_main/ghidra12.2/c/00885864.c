/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00885864; name: FUN_00885864
 */


void FUN_00885864(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(char *)(param_1 + 0x348) != '\0') {
      FUN_008f08f0(param_1 + 0x348,param_2);
    }
    if (*(char *)(param_1 + 0x300) != '\0') {
      FUN_008f08f0(param_1 + 0x300,param_2);
    }
    if (*(char *)(param_1 + 0x270) != '\0') {
      FUN_008f08f0(param_1 + 0x270,param_2);
    }
    if (*(char *)(param_1 + 0x2b8) != '\0') {
      FUN_008f08f0(param_1 + 0x2b8,param_2);
    }
    if (*(char *)(param_1 + 0x260) != '\0') {
      FUN_00e5c07c(param_1 + 0x150,param_2);
    }
    if (*(char *)(param_1 + 0x390) != '\0') {
      FUN_008f1c84(param_1 + 0x390,param_2);
    }
    if (*(char *)(param_1 + 0x90) != '\0') {
      FUN_008f2540((char *)(param_1 + 0x90),param_2);
    }
    if (*(char *)(param_1 + 0xb0) != '\0') {
      FUN_008f2540((char *)(param_1 + 0xb0),param_2);
    }
    if (*(char *)(param_1 + 0xd0) != '\0') {
      FUN_008f2540((char *)(param_1 + 0xd0),param_2);
    }
    if (*(char *)(param_1 + 0xf0) != '\0') {
      FUN_008f2540((char *)(param_1 + 0xf0),param_2);
    }
    if (*(char *)(param_1 + 0x110) != '\0') {
      FUN_008f2540(param_1 + 0x110,param_2);
    }
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_008f2540(param_1 + 0x130,param_2);
    }
    lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
    puVar1 = PTR_DAT_047d1f00;
    FUN_0271ab74(*(undefined8 *)
                  (*(long *)(*(long *)(lVar2 + 0x20) +
                            *(long *)(PTR_DAT_047d1f00 + (ulong)*(uint *)(param_1 + 0x10) * 8)) +
                  0x68),param_2);
    FUN_0271ab74(*(undefined8 *)
                  (*(long *)(*(long *)(lVar2 + 0x20) +
                             *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x40) + 0x68
                  ),param_2);
    FUN_0271ab74(*(undefined8 *)
                  (*(long *)(*(long *)(lVar2 + 0x20) +
                             *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x80) + 0x68
                  ),param_2);
    FUN_0271ab74(*(undefined8 *)
                  (*(long *)(*(long *)(lVar2 + 0x20) +
                             *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0xc0) + 0x68
                  ),param_2);
    FUN_0271ab74(*(undefined8 *)
                  (*(long *)(*(long *)(lVar2 + 0x20) +
                             *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x100) +
                  0x68),param_2);
    FUN_0271ab74(*(undefined8 *)
                  (*(long *)(*(long *)(lVar2 + 0x20) +
                             *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + 0x140) +
                  0x68),param_2);
    FUN_0271ab30(lVar2,param_2);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}


